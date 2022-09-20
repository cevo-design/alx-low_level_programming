#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose lenght is to be checked
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}