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
		if (format[i] == '%')
		{
			j = 0;
			while (j < 2)
			{
				if (format[i + 1] == *(v[j].format + 1))
				{
					len += v[j].f(values);
					break;
				}
				j++;
			}
			if (j == 2)
			{
				_putchar('%');
				if (format[i + 1] != '\0')
				{
					_putchar(format[i + 1]);
					len++;
				}
				i++;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(values);
	return (len);
}
