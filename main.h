#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printer - match conversion specifiers for printf.
 * @id: type char pointer of the specifier.
 * @f: pointer to function to convert specifier.
 */

typedef struct printer
{
	char *id;
	int (*f)();
} print_args;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int _strlen(char *str);
int print_percentage(void);
int print_string(va_list args);

#endif
