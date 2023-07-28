#include "main.h"

/**
 * print_string - function to print string.
 * @args: list of unknown args.
 * Return: length.
 */

int print_string(va_list args)
{
	char *s;
	int len, i;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	return (len);
}
