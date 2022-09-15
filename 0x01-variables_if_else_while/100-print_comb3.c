#include <stdio.h>

/**
 * main - prints all possible different combinations,
 * of two digits,
 * from 01 to 89
 * Return: 0 once successful
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if ((n + m) < (m + n))
			{
				putchar(n);
				putchar(m);
				if (n != 57 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
