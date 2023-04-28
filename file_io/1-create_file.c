#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename: a pointer
 *@text_content: a pointer
 *Return: (1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
