#include <unistd.h>
#include "main.h"

/**
* print_alphabets() - is a fonction using _putchar function
*to prints alphabets
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
