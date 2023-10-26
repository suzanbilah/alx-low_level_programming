#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: The pointer to a tring containing a binary number
 * Return: unsigned int with decimal value of binary num, 0 (on error)
 */
unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}
	for (s = 0; b[s] != '\0'; s++)
	{
		num <<= 1;
		if (b[s] == '1')
			num += 1;
	}
	return (num);
}
