#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void Print_Char(va_list arg);

void Print_int(va_list arg);

void print_Float(va_list arg);

void print_string(va_list arg);


#endif
