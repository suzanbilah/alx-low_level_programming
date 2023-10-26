#include "main.h"

/**
 * set_bit - A program that sets the value of a bit to 1 at a index given
 * @n: Number to set
 * @index: Index to set bit
 * Return: 1 (on success), -1 (on error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
