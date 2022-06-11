#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads text file and prints posix
 * @filename: file name
 * @letters: file name
 * Return: void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b;
	int o;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	a = read(o, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);
	if (a == -1 || b == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	close(o);

	return (a);
}
