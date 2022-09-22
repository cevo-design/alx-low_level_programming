#include "main.h"

/**
 * _strncat - appends the src string to the dest string,
 * uses at most n bytes from src,
 * src does not need to be null-terminated
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to append
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
