#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A  c comparaison with if
 *
 * Return: void
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n",  i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
