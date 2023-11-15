#include "main.h"

/**
 * print_int - print unsigned integer numbers
 *
 * @args: checks input of function
 *
 * Return: returns length of digits
*/

int print_unsignedint(va_list args)
{
	unsigned int number, num, length;

	num = 0;
	length = 0;
	number = va_arg(args, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number)
	{
		num += number % 10;
		number = number / 10;
		if (number != 0)
			num *= 10;
		length++;
	}
	while (num)
	{
		_putchar((num % 10) + '0');
		num = num / 10;
	}
	return (length);
}


/**
 * print_hex - print number in hexadecimal system
 *
 * @args: checks input of function
 *
 * Return: returns length of digits
*/

int print_hex(va_list args)
{
	unsigned int number, num;
	int length, i, j;
	char *s;

	number = va_arg(args, unsigned int);
	num = number;
	length = i = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num)
	{
		num = num / 16;
		length++;
	}
	s = malloc(length);
	while (number)
	{
		if ((number % 16) > 9)
		{
			s[i] = (number % 16) - 10 + 97;
		}
		else
		{
			s[i] = (number % 16) + '0';
		}
		number = number / 16;
		i++;
	}
	for (j = length - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (length);
}

/**
 * print_HEX - print number in hexadecimal system
 *
 * @args: checks input of function
 *
 * Return: returns length of digits
*/

int print_HEX(va_list args)
{
	unsigned int number, num;
	int length, i, j;
	char *s;

	number = va_arg(args, unsigned int);
	num = number;
	length = i = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num)
	{
		num = num / 16;
		length++;
	}
	s = malloc(length);
	while (number)
	{
		if ((number % 16) > 9)
		{
			s[i] = (number % 16) - 10 + 65;
		}
		else
		{
			s[i] = (number % 16) + '0';
		}
		number = number / 16;
		i++;
	}
	for (j = length - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (length);
}

