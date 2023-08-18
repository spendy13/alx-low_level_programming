#include "main.h"

/**
 * 1-alphabet.c - function to print alphabet to lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ;  i++)
		_putchar(i);
	putchar('\n');
	return (0);
}
