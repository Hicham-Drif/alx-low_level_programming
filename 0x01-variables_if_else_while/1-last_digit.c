#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the last digit
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	if (digit == 0)
	printf("Last digit of %i is 0 and is 0\n", n);
	if (digit < 6 && digit != 0)
	printf("Last digit of %i is %i and is less than 6\n", n, digit);
	return (0);
}
