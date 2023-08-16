#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
			even_sum += fib2;

		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("%lu\n", even_sum);

	return (0);
}
