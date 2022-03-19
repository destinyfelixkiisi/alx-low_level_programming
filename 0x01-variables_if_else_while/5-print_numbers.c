#include <stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints base ten digits
 * Return: 0 Always (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
return (0);
}
