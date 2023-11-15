#include "main.h"

/**
 * print_address - print address
 *
 * @args: checks input of function
 *
 * Return: returns number of characters
*/

int print_address(va_list args)
{
	void *ptr;
	int i, b;
	long int a;
	char *s = "(nil)";

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
		for (i = 0 ; s[i] != '\0' ; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_hex_help(a);
	return (b + 2);
}
