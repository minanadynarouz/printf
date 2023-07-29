#include "main.h"

/**
 * print_rot13 - function rotate input by ROT13.
 * @args: list of unknown args.
 * Return: count.
 */

int print_rot13(va_list args)
{
	int i, j, n, counter = 0;
	char *s = va_arg(args, char *);
	char data[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char dataRot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		n = 0;
		for (j = 0; data[j] && !n; j++)
		{
			if (s[i] == data[j])
			{
				_putchar(dataRot[j]);
				counter++;
				n = 1;
			}
		}
		if (!n)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
