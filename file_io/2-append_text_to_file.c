#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: a pointer
 *@text_content: a pointer
 *Return: (1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
