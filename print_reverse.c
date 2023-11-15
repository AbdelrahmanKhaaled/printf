#include "main.h"

/**
 * print_reverse - print reverse string.
 *
 * @args: checks input of function
 *
 * Return: returns number of characters
*/

int print_reverse(va_list args)
{
	char *str;
	int length, j;

	length = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	length = _strlen(str);

	for (j = length - 1 ; j >= 0 ; j--)
	{
		_putchar(str[j]);
	}
	return (length);
}
