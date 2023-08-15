#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: The number from which to extract the last digit
 *
 * Return: The vaule of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
