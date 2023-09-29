#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - This converts a binary number to unsigned int
 * @b: The string containing the binary number
 * Return: The converted number, or 0 if b is NULL, or contains non-binary
 * characters
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_val = (dec_val << 1) | (b[i] - '0');
	}

	return (dec_val);
}
