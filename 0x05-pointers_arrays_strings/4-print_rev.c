#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*(s + longi) != '\0')
	{
		longi++;
	}

	for (o = longi - 1; o >= 0; o--)
	{
		_putchar(s[o]);
	}
}
