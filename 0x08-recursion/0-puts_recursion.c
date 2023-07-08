#include "main.h"
#include <unistd.h>
/*
* _print_rev_recursion - Prints a string in reverse.
* @s: The string to be printed.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
