#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (-1 * (n % 10));
		_putchar (ld + '0');
		return (ld);
	}
	else
	{
		ld = (n % 10);
		_putchar(ld + '0');
		return (0);
	}
}
