#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file and prints
 * @filename: text file to bee read
 * @letters: number of letters being read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fl;
	ssize_t x;
	ssize_t y;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fl, buf, letters);
	x = write(STDOUT_FILENO, buf, y);
	free(buf);
	close(fl);
	return (x);
}
