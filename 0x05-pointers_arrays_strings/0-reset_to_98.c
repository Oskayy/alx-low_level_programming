#include "main.h"

/**
 * main - checks the code
 * Return - n
 * @n: input value
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)

{
	int n = 402;
	reset_to_98(&n);
	_putchar(n);
	_putchar('\n');
}
