#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: 1 on success -1 in failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) != 0)
	{
		fd = creat(filename, 0600);
	}
	if (text_content != NULL)
		len = strlen(text_content);

	fd = open(filename, O_RDWR);
	written = write(fd, text_content, len);

	if (fd == -1 || written == -1)
		return (-1);
	close(fd);
	return (1);
}
