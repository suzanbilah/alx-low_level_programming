#include "main.h"
#include <stddef.h>

/**
 * _strstr - Searches for the first occurrence of a substring within a string.
 * @haystack: The input string to be searched.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the first occurrence of the substring in the haystack,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
