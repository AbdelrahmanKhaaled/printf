#include "main.h"

/**
 * print_int - print integer numbers
 *
 * @args: checks input of function
 *
 * Return: returns length of digits
*/

int print_int(va_list args)
{
	int number, num, length;

	num = length = 0;
	number = va_arg(args, int);
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	       length++;
	}
	else if (number == 0)
	{
		putchar('0');
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
