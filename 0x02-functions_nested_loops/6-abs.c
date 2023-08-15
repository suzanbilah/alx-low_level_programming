#include "main.h"

/**
 * _abs - computes the absolute vaule of an integer
 * @n: The integer for which o find the absolute vaule
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
