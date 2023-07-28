#include "main.h"

/**
 * _printf - function to print any arg.
 * @format: is specifier.
 * Return: length of printed output.
 */

int _printf(const char *format, ...)
{
	print_args v[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percentage}};

	va_list values;
	int i = 0, j, len = 0;

	va_start(values, format);
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (v[j].format[0] == format[i] && v[j].format[1] == format[i + 1])
			{
				len += v[j].f(values);
				i += 2;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(values);
	return (len);
}
