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
			if (j != 9 && mul <= 9)
			{
				_putchar(mul + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j != 9 && mul > 9)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			if (j == 9 && mul <= 9)
			{
				_putchar(mul + 48);
			}
			if (j == 9 && mul > 9)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
