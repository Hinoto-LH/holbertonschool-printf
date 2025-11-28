#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct Choise
{
	char Choise;
	int(*func)(va_list args);

} Choise_s;

int _printf(const char *format, ...);
void print_char(char c);
void print_str(char format);
void print_dec(int i);
void print_int(int i);

#endif
