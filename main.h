#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int pswitch(va_list ap, const char *format, int i);
int _printf(const char *format, ...);
int _putchar(char c);
int print_decimal(int);
#endif
