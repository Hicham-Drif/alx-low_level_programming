#include <unistd.h>
#include "main.h"

/**
 * _isupper - check if char is in uppercase
 * @c: is the char to be checked
 * Return: 1 if char is in uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	return (1);
	else
	return (0);
}
