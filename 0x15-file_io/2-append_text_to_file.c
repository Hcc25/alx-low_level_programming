#include "main.h"
/**
 * append_text_to _file - appends a text to another file
 * @filename: a pointer
 * @text_content: A string
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, c);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
