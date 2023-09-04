#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
#include <ctype.h>

void check_usage(int carg);
int check_if_elf(unsigned char *buf);
void pmagic(unsigned char *buf);
void pclass(unsigned char *buf);
void pdata(unsigned char *buf);
void pversion(unsigned char *buf);
void posabi(unsigned char *buf);
void pabi(unsigned char *buf);
void ptype(unsigned int type, unsigned char *buf);
void pentry(unsigned long int entry, unsigned char *buf);
void close_fd(int fd);

/**
 * check_usage - check if used properly
 * @carg: number of arguments
 * Return: nothing
 */
void check_usage(int carg)
{
	if (carg != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
}

/**
 * check_if_elf - check if a file is ELF
 * @buf: content of the file to be treated
 * Return: 1 if a file is elf 0 otherwise
 */
int check_if_elf(unsigned char *buf)
{
	if (buf[0] != 0x7F || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: file is not of type ELF\n");
		exit(98);
	}
	return (0);
}

/**
 * close_fd - Closes an ELF file.
 * @fd: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}


/**
 * pmagic - prints the magic code of an elf header
 * @buf: content of the elf header
 * Return: nothing
*/
void pmagic(unsigned char *buf)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT - 1; i++)
	{
		printf("%02x ", buf[i]);
	}
	printf("%02x\n", buf[i]);
}

/**
 * pclass - prints the class of an elf header
 * @buf: content of the elf header
 * Return: nothing
*/
void pclass(unsigned char *buf)
{
	printf("  Class:                             ");
	if (buf[EI_CLASS] == EI_CLASS)
		printf("none\n");
	if (buf[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	if (buf[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
}

/**
 * pdata - prints the data of an elf file
 * @buf: content of the elf file
 * Return: nothing
*/
void pdata(unsigned char *buf)
{
	printf("  Data:                              ");
	if (buf[EI_DATA] == ELFDATANONE)
		printf("none\n");
	if (buf[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	if (buf[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
}

/**
 * pversion - prints the version of an elf file
 * @buf: content of the elf file
*/
void pversion(unsigned char *buf)
{
	printf("  Version:                           %d", buf[EI_VERSION]);
	if (buf[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * posabi - prints the os/abi of an elf file
 * @buf: content of the elf file
 * Return: nothing
*/
void posabi(unsigned char *buf)
{
	printf("  OS/ABI:                            ");
	if (buf[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (buf[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (buf[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (buf[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (buf[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (buf[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (buf[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (buf[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (buf[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (buf[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (buf[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", buf[EI_OSABI]);
}

/**
 * pabi - prints the abi of an elf file
 * @buf: content of the elf file
*/
void pabi(unsigned char *buf)
{
	printf("  ABI Version:                       %d\n", buf[EI_ABIVERSION]);
}

/**
 * ptype - prints the type of and elf file
 * @buf: content of the elf file
 * @type: type of the elf file
*/
void ptype(unsigned int type, unsigned char *buf)
{
	if (buf[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	if (type == ET_NONE)
		printf("NONE (None)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * pentry - prints the entry of an elf file
 * @buf: content of the elf file
 * @entry: entry of the elf file
*/
void pentry(unsigned long int entry, unsigned char *buf)
{
	printf("  Entry point address:               ");
	if (buf[EI_DATA] == ELFDATA2MSB)
		{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
		}
	if (buf[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if sucess 0 otherwise
 */
int main(int argc, char **argv)
{
	int fd, read1, size;
	char *file;
	Elf64_Ehdr *buf;

	check_usage(argc);
	file = argv[1];
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", file);
		exit(98);
	}
	size = sizeof(Elf64_Ehdr);
	buf = malloc(size);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", file);
		close_fd(fd);
		exit(98);
	}
	read1 = read(fd, buf, size);
	if (read1 == -1)
	{
		free(buf);
		close_fd(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", file);
		exit(98);
	}
	if (check_if_elf(buf->e_ident) == 0)
	{
		printf("ELF Header:\n");
		pmagic(buf->e_ident);
		pclass(buf->e_ident);
		pdata(buf->e_ident);
		pversion(buf->e_ident);
		posabi(buf->e_ident);
		pabi(buf->e_ident);
		ptype(buf->e_type, buf->e_ident);
		pentry(buf->e_entry, buf->e_ident);

		free(buf);
		close_fd(fd);
	}
	return (0);
}
