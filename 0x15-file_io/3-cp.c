#include "main.h"
#include <stdio.h>

#define SE STDERR_FILENO
#define MAX 1204


/**
 * main - creation of copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input, output, istate, ostate;
	char buf[MAX];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input = open(av[1], O_RDONLY);
	if (input == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		istate = read(input, buf, MAX);
		if (istate == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (istate > 0)
		{
			ostate = write(output, buf, (ssize_t) istate);
			if (ostate == -1)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (istate > 0);

	istate = close(input);
	if (istate == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input), exit(100);
	ostate = close(output);
	if (ostate == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output), exit(100);

	return (0);
}
