#include "main.h"

/**
 * _printf - function to print any arg.
 * @format: is specifier.
 * @...: ellipsis
 * Return: length of printed output.
 */

int _printf(const char *format, ...)
{
	print_args v[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percentage},
		{"%i", print_int},
		{"%d", print_int},
		{"%b", print_binary},
		{"%r", print_rev_string}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 6;
		while (j >= 0)
		{
			if (v[j].id[0] == format[i] && v[j].id[1] == format[i + 1])
			{
				len += v[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
