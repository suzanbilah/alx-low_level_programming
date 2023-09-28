#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function that writes the character c to stdout
 * @c: The charaacter to print
 *
 * Return: 1 (on success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
