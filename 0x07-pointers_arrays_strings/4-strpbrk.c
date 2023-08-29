#include "main.h"

/**
 * _strpbrk - Searches a string for a character from a set of
 * accepted characters.
 * @s: The input string to be searched.
 * @accept: The string containing the set of accepted characters.
 *
 * Return: Pointer to the first occurrence of a matching character,
 * or '\0' if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
