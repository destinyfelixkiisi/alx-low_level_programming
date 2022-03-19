#include <stdio.h>
/**
 * main - Entry point
 * Description: alphabets in reverse order
 * Return: 0 Always (Success)
 */
int main(void)
{
char l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
