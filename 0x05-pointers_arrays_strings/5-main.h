#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	revst_string(s);
	printf("%s\n", s);
	return (0);
}
