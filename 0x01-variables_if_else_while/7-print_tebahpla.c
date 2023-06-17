#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints alphabets in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
	putchar(alph);
	alph--;
	}
	putchar('\n');
	return (0);
}
