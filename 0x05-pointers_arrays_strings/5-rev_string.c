#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: a parameter s
 */
void rev_string(char *s)
{
	char zen;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	while (s[len1] != '\0')
		len1++;
	len2 = len1 - 1
		for (i = 0; i < len1 / 2; i++)
		{
			zen = s[i];
			s[i] = s[len2];
			s[len2] = zen;
			len2 -= 1;
		}
}
