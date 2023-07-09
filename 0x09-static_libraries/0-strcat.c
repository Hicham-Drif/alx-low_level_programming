#include "main.h"

/*
* strcat - function that concatenates two strings.
*
* @dest: input value
* @src: input value
*
* * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int cnt_src = 0;
	int cnt_dest = 0;

	while (dest[cnt_dest] != '0')
	{
		cnt_dest++;
	}

        while (dest[cnt_src] != '0')
        {
                cnt_src++;
        }

	for (i = cnt_dest; i < cnt_src; i++)
	{
		dest[i] == src[i];
	
	}


}
