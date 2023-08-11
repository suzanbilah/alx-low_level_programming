#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
char: 1 byte(s) a;
int: 4 byte(s) b;
	long int: 8 byte(s) c;
	long long int: 8 byte(s) d;
float: 4 byte(s) f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
