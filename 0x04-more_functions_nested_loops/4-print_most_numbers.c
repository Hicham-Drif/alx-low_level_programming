#include "main.h"

/**
* print_numbers - print 0-9 exept 2 and 4
* @c: char to check
* return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}
	_putchar('\n');
}

