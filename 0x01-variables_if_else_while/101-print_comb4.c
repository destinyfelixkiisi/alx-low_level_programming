#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible different combinations of two digits
 * Return: 0 Always (Success)
 */
int main(void)
{
	int f_num;
	int s_num;
	int l_num;

	for (f_num = 48; f_num <= 57; f_num++)
	{
		for (s_num = 49; s_num <= 57; s_num++)
		{
			for (l_num = 50; l_num <= 57; l_num++)
			{
				if (l_num > s_num && s_num > f_num)
				{
					putchar(f_num);
					putchar(s_num);
					putchar(l_num);

					if (f_num != 55 || s_num != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
