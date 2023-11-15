#include "main.h"

/**
 * print_hex2char - prints the string
 *
 * @args: checks input of function
 *
 * Return: returns number of characters
*/

int print_hex2char(va_list args)
{
	char *str;
	int length, k;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	length = _strlen(str);

	for (k = 0 ; str[k] != '\0' ; k++)
	{
		if ((str[k] > 0 && str[k] < 32) || (str[k] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_putchar((str[k] / 16) + '0');
			length += 2;
			if ((str[k] % 16) > 9)
			{
				_putchar((str[k] % 16) - 10 + 65);
				length++;
			}
			else
			{
				_putchar((str[k] % 16) + '0');
				length++;
			}
		}
		else
			_putchar(str[k]);
	}
	return (length);
}
