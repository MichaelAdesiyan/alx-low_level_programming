#include "main.h"
/**
 * append_text_to_file - appends text at the end of life
 * @filename: file name
 * @text_content: content file
 *
 * Return: 1 and -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int atm, m, d = 0;

		if (!filename)
			return (-1);
	atm = open(filename, O_WRONLY | O_APPEND);
	if (atm < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[d])
			d++;
		m = write(atm, text_content, d);
		if (m != d)
			return (-1);
	}
	close(atm);
	return (1);
}
