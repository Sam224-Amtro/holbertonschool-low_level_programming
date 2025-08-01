#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: Text to write into the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nletters, nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	nletters = 0;
	while (text_content[nletters] != '\0')
		nletters++;

	nwrite = write(fd, text_content, nletters);

	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
