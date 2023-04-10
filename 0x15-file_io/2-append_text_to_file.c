#include "main.h"
/**
 * append_text_to_file - appends texts at the end of the file
 * @filename: a pointer
 * text_content: a string to add to the end of the line
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (w = 0; text_content[w];)
			w++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, w);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
