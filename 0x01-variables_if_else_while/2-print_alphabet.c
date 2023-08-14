#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (always)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
