#include "main.h"
/**
 * create_file - function that create a file 
 * @filename: file 
 * @text_content: file 
 * Return: 1, -1 
 */
int create_file(const char *filename, char *text_content)
{
	int folder, star, x;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{for (x = 0; text_content[x] != '\0'; x++);
		star = write(folder, text_content, x);
			if (star == -1)
				return (-1);
	}
	close(folder);
	return (1);
}
