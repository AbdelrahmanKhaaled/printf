#include "main.h"

/**
 * print_binary - print number in binary system
 *
 * @args: checks input of function
 *
 * Return: returns length of binary number (Success)
*/

int print_binary(va_list args)
{
	unsigned int number, length, num, i;
	char *s;
	int j;

	number = va_arg(args, unsigned int);
	num = number;
	length = 0;
	i = 0;
	j = 0;
	if (number == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}
	else
	{
		while (num)
		{
			num = num / 2;
			length++;
		}
		s = malloc(length);
		while (number)
		{
			s[i] = (number % 2) + '0';
			number = number / 2;
			i++;
		}
		for (j = length - 1 ; j >= 0 ; j--)
		{
			_putchar(s[j]);
		}
	}
	return (length);
}
