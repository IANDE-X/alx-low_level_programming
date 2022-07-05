#include "main.h"

/**
 * print_alphabet: Prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
