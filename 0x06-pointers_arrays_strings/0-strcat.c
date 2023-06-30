#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;
	int cnt_src = 0, cnt_des = 0;

	while (src[cnt_des] != '\0')
	{
		cnt_des++;
	}
        while (src[cnt_src] != '\0')
        {
                cnt_src++;
        }

	for (i = cnt_des; i < cnt_src; i++)
	{
		dest[i] = src [j];
		j++;
	}

	return (dest);
}
