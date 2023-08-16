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
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last =last * -1;
	}
	_putchar(last + '0');
	return (last);
}
i
