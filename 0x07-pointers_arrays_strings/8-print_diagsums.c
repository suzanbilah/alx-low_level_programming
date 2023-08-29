#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calculates and prints the sums of the diagonals of a
 * square matrix.
 * @a: The input square matrix as a one-dimensional array.
 * @size: The size of the matrix.
 * Return: This function doesn't return anything (void).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
