#include "main.h"

/**
 * _strlen - calculate number of characters in str
 *
 * @str: checks input of function
 *
 * Return: returns length of digits
*/

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

/**
 * print_hex_help - print number in hexadecimal system
 *
 * @number: checks input of function
 *
 * Return: returns length of digits
*/

int print_hex_help(unsigned long int number)
{
	unsigned long int num;
	int length, i, j;
	char *s;

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
