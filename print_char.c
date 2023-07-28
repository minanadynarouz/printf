#include "main.h"

/**
 * print_char - function to print character.
 * @args: list of unknown args.
 * Return: 1.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}
