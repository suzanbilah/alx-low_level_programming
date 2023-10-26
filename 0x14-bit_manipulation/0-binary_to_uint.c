#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: The pointer to a tring containing a binary number
 * Return: unsigned int with decimal value of binary num, 0 (on error)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
