#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 using only
 * putchar aand int var
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 49;

	while (num <= 57)
	{
	putchar(num);
	if (num != 57)
	{
	putchar(44);
	putchar(32);
	}
	num++;
	}
	putchar('\n');
	return (0);
}
