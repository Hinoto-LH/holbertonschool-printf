#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct Choise
{
	void(*func)char);
} Choise;

int _printf(const char *format, ...);
void print_char(char c);
void print_str(char format);
void print_dec(char d);
void print_int(int i);

#endif
