#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void check_usage(int carg);
int get_file_size(char *file);
int check_if_elf(char *buf);
void print_magic(char *buf);
void print_class(char *buf);

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

	printf("Magic:   ");
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
	printf("Class:                             ");
	if (buf[4] == 0)
	printf("Invalid class\n");
	else if (buf[4] == 1)
		printf("ELF32\n");
	else if (buf[4] == 2)
		printf("ELF64\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: couldn't read class\n");
	}
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
		print_magic(buf);
		print_class(buf);
	}

	return (0);
}
