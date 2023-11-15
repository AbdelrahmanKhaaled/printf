#include "main.h"

/**
 * print_rot13 - print rotate string with 13
 *
 * @args: checks input of function
 *
 * Return: returns number of characters
*/

int print_rot13(va_list args)
{
	int length, i;
	char *str = va_arg(args, char*);

	length = 0;
	if (str == NULL)
		str = "(null)";
	length = _strlen(str);
	for (i = 0 ; i <  length ; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'M')
				_putchar(str[i] - 13);
			else
				_putchar(str[i] + 13);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm')
				_putchar(str[i] - 13);
			else
				_putchar(str[i] + 13);
		}
		else
			_putchar(str[i]);
	}
	return (length);
}
