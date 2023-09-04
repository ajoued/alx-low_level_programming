#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it
* to the POSIX standard output
* @filename: name of the file to be treated
* @letters: number of letters to be read from the file
* Return: the actual number of letters it could read and print
* 0 if it fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t real_read, real_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	real_read = read(fd, buf, letters);
	if (fd == -1 || real_read == -1)
		return (0);
	real_write = write(STDOUT_FILENO, buf, real_read);
	if (real_write == -1 || real_write != real_read)
		return (0);
	free(buf);
	close(fd);
	return (real_write);
}
