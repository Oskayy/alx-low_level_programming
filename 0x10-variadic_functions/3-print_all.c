#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	va_list args;
	char *s;
	const cahr t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%s%c", va_arg(args, int));
				break;
		case 'i':
			printf("%s%d", va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *), c = 1;
			if (!s)
			{
				printf("nil");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
