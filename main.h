#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

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

/**
 * struct list_s - to hold nums in node and reverse it
 * @n: numbers to be added.
 * @next: pointer to add of next node.
 */

typedef struct list_s
{
    int n;
    struct list_s *next;
} list_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int _strlen(char *str);
int print_percentage(void);
int print_string(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_rev_string(va_list args);

#endif
