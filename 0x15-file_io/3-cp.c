#include "main.h"
#include <stdio.h>

/**
 * str_alloc - allocates 1024 for the string
 * @file: file name if error occured
 * Return: pointer to the allocated memory
 */
char *str_alloc(char *file)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (ptr);
}

/**
 * file_close - closes a file and
 * @fd: file to be closed
 * Return: 0 if success -1 if fails
 */
int file_close(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success otherwise if it fails
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd, read1, write2;
	char *file1, *file2, *str;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = argv[1];
	file2 = argv[2];
	str = str_alloc(file2);
	src_fd = open(file1, O_RDONLY);
	read1 = read(src_fd, str, 1024);
	dest_fd = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_fd == -1 || read1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			free(str);
			exit(98);
		}
		write2 = write(dest_fd, str, read1);
		if (dest_fd == -1 || write2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			free(str);
			exit(99);
		}
		read1 = read(src_fd, str, 1024);
		dest_fd = open(file2, O_WRONLY | O_APPEND);
	} while (read1 > 0);
	free(str);
	file_close(src_fd);
	file_close(dest_fd);

	return (0);
}
