#include "main.h"

/**
 * get_endianness - a program that checks the endianness
 *
 * Return: 0 (if big endian), 1 (if little endian)
 */
int get_endianness(void)
{
	int s;
	char *p;

	s = 1;
	p = (char *)&s;
	return (*p);
}
