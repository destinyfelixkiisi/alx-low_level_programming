#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first paramter
 * @b: second paramter
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int f = *a, s = *b;

	*a = s;

	*b = f;
}
