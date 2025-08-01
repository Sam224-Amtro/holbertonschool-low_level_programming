#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - lit un fichier texte et l'affiche sur la sortie standard
 * @filename: nom du fichier à lire
 * @letters: nombre de lettres à lire et afficher
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 en cas d'erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	free(buf);
	close(fd);

	if (nrd == -1 || nwr == -1 || nrd != nwr)
		return (0);

	return (nwr);
}
