#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A programe tha prints alphabets in min and maj
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char min = 'a';
	char maj = 'A';

	while (min <= 'z')
	{
	putchar(min);
	min++;
	}
	while (maj <= 'Z')
	{
	putchar(maj);
	maj++;
	}
	putchar('\n');
	return (0);
}
