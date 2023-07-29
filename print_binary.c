#include "main.h"

/**
 * print_binary - function to print binary.
 * @args: list of unknown args.
 * Return: count of binary nums.
 */

int print_binary(va_list args)
{
	int binary[32];
	int i = 0, j, count = 0;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = num & 1;
		num = num >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}
	return (count);
}
