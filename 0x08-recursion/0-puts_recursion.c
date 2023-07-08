#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
_puts_recursion(char *s)
{
	if (*s != '\0')
	{	
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
