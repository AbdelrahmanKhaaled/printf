#include "main.h"

/**
 * print_char - print character
 *
 * @args: checks input of function
 * Return: returns 1
*/

int print_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - print string
 *
 * @args: checks input of function
 * Return: returns length of string
*/

int print_string(va_list args)
{
	char *str;
	int length, i;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	length = _strlen(str);
	for (i = 0 ; i < length ; i++)
		_putchar(str[i]);
	return (length);
}

/**
 * print_percentage - print percentage
 *
 * Return: returns 1
 */

int print_percentage(void)
{
	_putchar('%');
	return (1);
}
