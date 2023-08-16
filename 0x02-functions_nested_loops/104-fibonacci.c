#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_sum = 0;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;

		printf(", %lu", fib_sum);
	}

	printf("\n");

	return (0);
}
