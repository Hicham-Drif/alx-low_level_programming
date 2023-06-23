#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints _putchar using predifined function _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
