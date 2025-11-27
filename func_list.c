#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 */
void print_char(char c)
{
	(write(1, &c, 1));
}

/**
 * print_str - prints a string
 * @format: string to print
 */
void print_str(char format)
{
	(write(1, format, 1));
}

/**
 * print_dec - prints a decimal
 * @d: decimal character to print
 */
void print_dec(char d)
{
	(write(1, d, 1));
}

/**
 * print_int - prints an integer
 * @i: integer to print
 */
void print_int(int i)
{
	char m = '-';

	if (i < 0)
	{
		write(1, &m, 1);
		write(1, i, 1);
	}
	else
	{
		write(1, i, 1);
	}
}
