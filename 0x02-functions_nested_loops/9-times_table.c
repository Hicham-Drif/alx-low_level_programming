#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*
* return : void
*/
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul <= 9)
			{
				_putchar(mul + 48);
			}
			else if (mul > 9)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
			if (j != 9 && mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
