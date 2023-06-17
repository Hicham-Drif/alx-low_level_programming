#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints alphabets exept e and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
	if (alph == 'e' || alph == 'q')
	{alph++;
	}
	putchar(alph);
	alph++;
	}
	putchar('\n');
	return (0);
}
