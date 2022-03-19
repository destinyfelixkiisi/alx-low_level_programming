#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all alphabets
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
