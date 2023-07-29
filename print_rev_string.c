#include "main.h"

/**
 * print_rev_string - function to print reversed string.
 * @args: list of unknown args.
 * Return: length.
 */

int print_rev_string(va_list args)
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
		for (i = len - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	return (len);
}
