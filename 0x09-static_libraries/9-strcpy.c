#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int cnt = 0;
	int i;

	while (src[cnt] != 0)
	cnt++;
	for (i = 0; i < cnt; i++)
	{
	dest[i] = src[i];
	}
	dest[cnt] = '\0';
	return (dest);
}
