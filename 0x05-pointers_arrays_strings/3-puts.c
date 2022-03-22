#include "main.h"
/**
 * _puts - print to stdout
 * @str: paramter
 * Return: null
 */
void _puts(char *str)
{
	int m;

	char *c;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
