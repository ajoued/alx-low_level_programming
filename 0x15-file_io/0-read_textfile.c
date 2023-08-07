#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file to be printed
 * @letters: number of letters to printed from the file
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string;
	ssize_t ifd, written, rd;

	ifd = open(filename, O_RDONLY);
	if (ifd < 0)
		return (0);
	string = malloc(sizeof(char) * letters);
	rd = read(ifd, string, letters);
	written = write(STDOUT_FILENO, string, rd);

	return (written);
}
