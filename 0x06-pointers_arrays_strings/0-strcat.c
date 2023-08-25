#include "main.h"
/**
 * _strcat - concatenation of  two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int w;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[i] = src[w];
		i++;
		w++;
	}

	dest[i] = '\0';
	return (dest);
}

