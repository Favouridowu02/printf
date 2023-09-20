#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int pswitch(va_list ap, const char *format, int i);
int print_decimal(int);
#endif
