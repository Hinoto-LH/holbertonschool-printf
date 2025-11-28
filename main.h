#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct Choise 
{
	int Choise;
	int (*func)(va_list args);

} Specifier;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_dec(int i);
int print_int(int i);
int print_percent(va_list args);

#endif
