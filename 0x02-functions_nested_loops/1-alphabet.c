#include <unistd.h>
#include "main.h"

/**
* * print_alphabet - print all alphabet in lowercase
*using _putchar function
*
* Return: (void)
*/
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
