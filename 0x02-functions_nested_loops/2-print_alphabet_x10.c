#include "main.h"

/**
* print_alphabet -  prints the alphabet,
* in lowercase, followed by a new line.
* Return: 0 once successful
*/
void print_alphabet_x10(void)
{
	char ch;
	int cnt = 10;

	while (cnt < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		cnt++;
	}
}
