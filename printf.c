#include "main.h"

/**
 * _printf - print all characters
 *
 * @format: checks input of function
 *
 * Return: returns number of characters
*/

int _printf(const char *format, ...)
{
	match m[] = {
		{ "%c", print_char}, {"%s", print_string}
		, {"%d", print_int}, {"%i", print_int}, {"%b", print_binary}
		, {"%u", print_unsignedint}, {"%o", print_octal}, {"%x", print_hex}
		, {"%X", print_HEX}
		, {"%S", print_hex2char}
		, {"%r", print_reverse}
		, {"%R", print_rot13}
		, {"%p", print_address}};

	va_list args;
	int i = 0, len = 0, j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
here:
	while (format[i] == '\0')
	{
		j = 12;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i]
			&& m[j].id[1] == format[i + 1])
			{
				len += m[j].fun();
				i += 2;
				goto here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
