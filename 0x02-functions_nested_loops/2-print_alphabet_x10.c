#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - print all alphabet in lowercase
* 10 times using _putchar function
*
* Return: (void)
*/
void print_alphabet_x10(void)
{
	int i = 'a';
	int count = 0;

	while (count < 10)
	{
	i = 'a';
	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	count++;
	_putchar('\n');
	}
}
