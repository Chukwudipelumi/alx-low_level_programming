#include "main.h"
/**
 * _strncat - concatenation two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int w;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	w = 0;
	while (w < n && src[w] != '\0')
	{
	dest[i] = src[w];
	i++;
	w++;
	}
	dest[i] = '\0';
	return (dest);
}
