#include "main.h"

/**
*print_rev - imprime en reversa
*@s: string
* return: 0
*/

void print_rev(char *s)

{
	int i;
	int len = 0;

	while (s[len])
	{
	len++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
