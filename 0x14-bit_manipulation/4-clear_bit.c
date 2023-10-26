#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - A program that sets the value of a bit to 0
 * @n: The parameter
 * @index: The index
 * Return: 1 (on success), -1 (on error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n)  * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
