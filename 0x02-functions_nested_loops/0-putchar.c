#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * main - Print "putchar"
 *
 * Return: Always 0 (Success)
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
