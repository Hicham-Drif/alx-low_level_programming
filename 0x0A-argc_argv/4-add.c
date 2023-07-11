#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - add two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/

int isnumber (char *c);

int main(int argc, char *argv[])
{
	int i, strtonum,  sum = 0;

	for (i = 1; i < argc; i++)
	{	if (isnumber(argv[i] == 0)
		{
			strtonum = atoi(argv[i]);
			sum += strtonum;
		}
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

/**
* isnumber -verify if it's a number
* @char *c: character to verify
*
* Return: 0 (Success), 1 (Error)
*/
int isnumber (char *c)
{
	int len = 0, i = 0;
	
	while (c[len] != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		if (isdigit(c[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
