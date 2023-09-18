#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: pointer to a character string
 * Llala and Keegan have done this code
 * Return: string printed to stdout
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, k;
	char c, *s;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			len++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				len += print_char(c);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				len += print_string(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				k = va_arg(args, int);
				len += print_num(k);
			}
			else if (*format == '%')
			{
				print_perc();
				len++;
			}
		}
		format++;
	}
	va_end(args);
	return (len);
}
