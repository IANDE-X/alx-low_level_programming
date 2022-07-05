#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * main - Entry point
 *
 * Return: On success 1.
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(c[i]);
		}
	_putchar('\n');
	return (0);
}
