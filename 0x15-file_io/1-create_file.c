#include "main.h"

/**
 * create_file - create readable and writable file
 * @filename: file pointer
 * @text_content: file string
 * Return: 1 , -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
int folder, star, x;

if (filename == NULL)
	return (-1);

folder = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (folder == -1)
	return (-1);

if (text_content)
{
	for (x = 0; text_content[x] != '\0'; x++)
		;
	star = write(folder, text_content, x);
	if (star == -1)
		return (-1);
}

close(folder);
return (1);
}
