#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
#include <ctype.h>

void check_usage(int carg);
int get_file_size(char *file);
int check_if_elf(char *buf);
void print_magic(char *buf);
void print_class(char *buf);
void print_data(char *buf);
void print_version(char *buf);
void print_osabi(char *buf);
void print_abi(char *buf);
void print_entry(char *buf);

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
 * get_file_size - gets the size of a file
 * @file: name of the file
 * Return: return the size of the file -1 if it fails
 */
int get_file_size(char *file)
{
	int fd, length;

	fd = open(file, O_RDONLY);
	length = lseek(fd, 0, SEEK_END);
	if (fd == -1 || length == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	close(fd);
	return (length);
}

/**
 * check_if_elf - check if a file is ELF
 * @buf: content of the file to be treated
 * Return: 1 if a file is elf 0 otherwise
 */
int check_if_elf(char *buf)
{
	if (buf[0] != 0x7F || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: file is not of type ELF\n");
		exit(98);
	}
	return (0);
}

/**
 * print_magic - prints magic number of elf file
 * @buf: content of elf file
 * Return: nothing
 */
void print_magic(char *buf)
{
	int i = 0;

	printf("  Magic:   ");
	for (i = 0; i < 15; i++)
	{
		printf("%02x ", buf[i]);
	}
	printf("%02x\n", buf[i]);
}

/**
 * print_class - print the class
 * @buf: content of elf file
 * Return: nothing
 */
void print_class(char *buf)
{
	printf("  Class:                             ");
	if (buf[4] == 0)
		printf("Invalid class\n");
	else if (buf[4] == 1)
		printf("ELF32\n");
	else if (buf[4] == 2)
		printf("ELF64\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: couldn't read class\n");
		exit(98);
	}
}
/**
 * print_data - prints the data type of elf file
 * @buf: content of the elf file
 * Return: nothing
 */
void print_data(char *buf)
{
	printf("  Data:                              ");
	if (buf[5] == 0)
		printf("Invalid data encoding\n");
	else if (buf[5] == 1)
		printf("2's complement, little endian\n");
	else if (buf[5] == 2)
		printf("2's complement, big endian\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: couldn't read class\n");
		exit(98);
	}
}
/**
 * print_version - prints the version of the elf file
 * @buf: content of the elf file
 * Return: nothing
 */
void print_version(char *buf)
{
	printf("  Version:                           ");
	if (buf[6] == 1)
		printf("1 (current)\n");
	else
		printf("1\n");
}
/**
 * print_osabi - prints os/abi of the elf file
 * @buf: content of the elf file
 * Return: nothing
 */
void print_osabi(char *buf)
{
	printf("  OS/ABI:                            ");
	if (buf[7] == 0)
		printf("UNIX - System V\n");
	else if (buf[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (buf[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (buf[7] == 3)
		printf("UNIX - Linux\n");
	else if (buf[7] == 6)
		printf("UNIX - Solaris\n");
	else if (buf[7] == 7)
		printf("UNIX - AIX\n");
	else if (buf[7] == 8)
		printf("UNIX - IRIX\n");
	else if (buf[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (buf[7] == 10)
		printf("UNIX - Compaq TRU64 UNIX\n");
	else if (buf[7] == 11)
		printf("Novell Modesto\n");
	else if (buf[7] == 12)
		printf("Open BSD\n");
	else if (buf[7] == 13)
		printf("Open VMS\n");
	else if (buf[7] == 14)
		printf("Hewlett-Packard Non-Stop Kernel\n");
	else
		printf("<unknown: %x>\n", buf[7]);
}
/**
 * print_abi - prints abi version of the elf file
 * @buf: content of the elf file
 * Return: nothing
 */
void print_abi(char *buf)
{
	printf("  ABI Version:                       %x\n", buf[8]);
}
/**
 * print_entry - prints entry point of elf file
 * @buf: content of the elf file
 */
void print_entry(char *buf)
{
	int i, n;

	printf("  Entry point address:               0x");
	if (buf[4] == 1)
	{
		i = 24;
		n = 28;
	}
	else if (buf[4] == 2)
	{
		i = 32;
		n = 40;
	}
	for (;i < n; i++)
	{
		printf("%x", buf[i]);
	}
	printf("\n");
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
	char *file, *buf;

	check_usage(argc);
	file = argv[1];
	size = get_file_size(file);
	fd = open(file, O_RDONLY);
	buf = malloc(sizeof(char) * size);
	read1 = read(fd, buf, size);
	read1 = read1;
	if (check_if_elf(buf) == 0)
	{
		printf("ELF Header:\n");
		print_magic(buf);
		print_class(buf);
		print_data(buf);
		print_version(buf);
		print_osabi(buf);
		print_abi(buf);
		printf("  Type:                              ");
		printf("EXEC (Executable file)\n");
		print_entry(buf);
	}

	return (0);
}
