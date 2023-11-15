#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - format_struct
 *
 * @id: format character
 * @fun: function associated to character
*/

typedef struct format
{
	char *id;
	int (*fun)(va_list);
} match;

int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_percentage(void);

int print_int(va_list args);

int print_hex2char(va_list args);

int print_HEX(va_list args);
int print_hex(va_list args);
int print_octal(va_list args);
int print_unsignedint(va_list args);

int print_address(va_list args);

int print_binary(va_list args);

int print_reverse(va_list args);

int print_rot13(va_list args);

int _strlen(char *s);
int print_hex_help(unsigned long int a);

int _printf(const char *format, ...);

#endif
