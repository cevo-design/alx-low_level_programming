#include "main.h"

/**
* print_alphabet -  prints the alphabet,
* in lowercase, followed by a new line.
* Return: 0 once successful
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
