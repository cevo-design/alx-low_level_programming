#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10,
 * starting from 0,
 * followed by a new line, using putchar
 * Return: 0 once successful
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
