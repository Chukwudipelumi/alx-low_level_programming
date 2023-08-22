#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *u = str;
	int w;

	while (*u != '\0')
	{
		u++;
		i++;
	}
	t = i - 1;
	for (w = 0 ; w <= t ; w++)
	{
		if (w % 2 == 0)
	{
		_putchar(str[w]);
	}
	}
	_putchar('\n');
}
