#include "main.h"
/**
 * _strlen - length of a string
 * @s: paramter
 * Return: print the value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
