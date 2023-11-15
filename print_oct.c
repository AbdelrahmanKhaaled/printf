#include "main.h"

/**
 * print_octal - print number in octal system
 *
 * @args: checks input of function
 *
 * Return: returns length of digits
*/

int print_octal(va_list args)
{
	unsigned int number, num;
	int i;
	int length, j;
	char *s;

	length = i = 0;
	number = va_arg(args, unsigned int);
	num = number;
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num)
	{
		num = num / 8;
		length++;
	}
	s = malloc(length);
	while (number)
	{
		s[i] = (number % 8) + '0';
		number = number / 8;
		i++;
	}
	for (j = length - 1; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (length);
}
