#include "main.h"

/**
 * _strlen - get length of string.
 * @str: string to be checked.
 * Return: length of string.
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	
	return (len);
}
