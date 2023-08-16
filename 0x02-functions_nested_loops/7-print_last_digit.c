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
	int a;

	if (n < 0)
	
		n = -n;
	a = n % 10;
	
	if(a < 0)
		a= -a;
	_putchar(a + '0');
	return (a);
}
