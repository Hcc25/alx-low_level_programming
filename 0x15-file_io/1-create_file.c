#include "main.h"
/**
 * create_file - creates a file
 * @filename:a pointer
 * @text_content: a pointer
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl, x, l;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fl, text_content, 1);
			if (fl == -1 || x == -1)
			return (-1);
			close(fl);
			return (1);
			}
