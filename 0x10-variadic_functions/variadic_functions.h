#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_charptr(char *separator, va_list args);

/**
 * struct format_types- format types
 * @identifier: specifier
 * @f:pointer
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
}f_dt;

#endif /* _VARIADIC_FUNCTIONS_H */
