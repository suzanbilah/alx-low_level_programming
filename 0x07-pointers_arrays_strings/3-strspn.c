#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of a string
 * consisting only of characters from another string.
 * @s: The input string to be analyzed.
 * @accept: The string containing the characters to be accepted.
 *
 * Return: The length of the initial segment of 's' containing only characters
 *         from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
