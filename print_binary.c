#include "main.h"

/**
 * print_binary - function to print binary.
 * @args: list of unknown args.
 * Return: count of binary nums.
 */

int print_binary(va_list args)
{
	int total_bits = (sizeof(unsigned int) * 8);
	unsigned int num = va_arg(args, unsigned int);
	int i, count = 0;

	for (i = total_bits - 1; i >= 0; i--)
	{
		int bit = (num >> i) & 1;

		_putchar(bit + '0');
		count++;
	}
	return (count);
}
