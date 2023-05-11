#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: it is a pointer that points to
 * thname of the created file
 * @text_content: A pointer to a string
 *
 * Return: returns 1 on success otherwie -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(b, text_content, c);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
