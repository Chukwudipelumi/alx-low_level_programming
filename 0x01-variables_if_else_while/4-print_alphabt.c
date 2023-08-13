#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char boo;

	for (boo = 'a'; boo <= 'z'; boo++)
	{
	if (boo != 'e' && boo != 'q')

		putchar(boo);

	}

	putchar('\n');

	return (0);
}
