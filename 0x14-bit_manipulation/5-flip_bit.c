#include "main.h"

/**
 * flip_bits -  A function that counts the number of bits to change to get
 * from one number to another
 * @n: The first num
 * @m: The secound num
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, count = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		current = excl >> s;
		if (current & 1)
			count++;
	}
	return (count);
}
