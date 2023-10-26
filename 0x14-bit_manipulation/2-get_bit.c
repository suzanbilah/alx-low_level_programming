#include "main.h"

/**
 * get_bit - A program that returns the value of a bit at a given index
 * @n: The number to check bits
 * @index: index to check bit
 * Return: the value of bit, -1 9on error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s, p;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	p = n & s;
	if (p == s)
		return (1);
	return (0);
}
