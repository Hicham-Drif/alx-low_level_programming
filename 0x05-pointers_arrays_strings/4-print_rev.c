#include "main.h"

/**
*print_rev - imprime en reversa
*@s: string
* return: 0
*/

void print_rev(char *s)

{
	int len = _strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
