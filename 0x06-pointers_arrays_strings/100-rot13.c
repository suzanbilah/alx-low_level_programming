#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @s: The input string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char data[] = "ACDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datatrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (data[j] != '\0')
		{
			if (s[i] == data[j])
			{
				s[i] = datatrot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
