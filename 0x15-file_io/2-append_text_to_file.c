#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be treated
 * @text_content: content to put in the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written = 0, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			written = write(fd, text_content, len);
		}
		if (written == -1)
			return (-1);
	}
	return (1);
}
