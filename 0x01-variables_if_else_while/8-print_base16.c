#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints Hexa number  in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = '0';

	while (num <= 'f')
	{
	putchar(num);
	if (num == 57)
	{
	num = num + 39;
	}
	num++;
	}
	putchar('\n');
	return (0);
}
