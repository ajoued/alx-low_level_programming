#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int fd1, fd2, read1, write2, len = 0, c1, c2;
	char *file1, *file2, *str;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = argv[1];
	file2 = argv[2];
	fd1 = open(file1, O_RDONLY);
	len = lseek(fd1, 0, SEEK_END);
	str = malloc(sizeof(char) * len);
	lseek(fd1, 0, SEEK_SET);
	read1 = read(fd1, str, len);
	if (fd1 == -1 || read1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write2 = write(fd2, str, len);
	if (fd2 == -1 || write2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	free(str);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}

	return (0);
}
