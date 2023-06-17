#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints numbers using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
	putchar(num + 48);
	num++;
	}
	putchar('\n');
	return (0);
}
