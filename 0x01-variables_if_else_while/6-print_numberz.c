#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (always)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');

	return (0);
}
