#include "main.h"
/**
 * print_last_digit - will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int c)
{
	int c;

	if (c < 0)
	{
		c = -c;
	b= c %10;
	}
	if(b < 0)
		c= -c;
	_putchar(c + '0');
	return (c);
}
i
