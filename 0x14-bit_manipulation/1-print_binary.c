#include "main.h"

/**
 * _pow - A function that calculates base
 * @base: the base
 * @power: The poer
 * Return: The value of base raised to power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int s;

	num = 1;
	for (s = 1; s <= power; s++)
		num *= base;
	return (num);
}

/**
 * print_binary - A function that prints a number in binary
 * @n: Number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int s, p;
	char lag;

	lag = 0;
	s = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (s != 0)
	{
		p = n & s;
		if (p == s)
		{
			lag = 1;
			_putchar('1');
		}
		else if (lag == 1 || s == 1)
		{
			_putchar('0');
		}
		s >>= 1;
	}
}
