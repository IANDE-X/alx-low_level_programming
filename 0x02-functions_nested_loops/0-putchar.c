#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *   
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

int_putchar(char c)
{
	int i;
	char c [] = "_putchar";
	for (i =0; i < 8; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
