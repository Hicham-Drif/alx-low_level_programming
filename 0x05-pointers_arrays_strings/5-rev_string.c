#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	while (s[len] != '\0') /* or just write while (s[len])*/
	{
		len++;
	}
	len--;

	for (i = 0; i <= len; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
}
