#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - prints a character
 * @c: character to print
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	(write(1, &c, 1));
	return (1);
}

/**
 * print_str - prints a string
 * @format: string to print
 */
int print_str(va_list string)
{
	int c = 0;

    if (c == '\0')
    {
        return (-1);
    }

    for (; string[c] != '\0'; c++)
    {
    	write(1, &c, 1);
    }
	return (0);
}

/**
 * print_dec - prints a decimal
 * @d: decimal character to print
 */
/**int print_dec(int i)
{
	char m = '-';

	if (i < 0)
	{
		write(1, &m, 1);
		write(1, &i, 1);
	}
	else
	{
		(write(1, &i, 1));
	}
    return (0);
}


 * print_int - prints an integer
 * @i: integer to print

int print_int(int i)
{
	char m = '-';

	if (i < 0)
	{
		write(1, &m, 1);
		write(1, &i, 1);
	}
	else
	{
		write(1, &i, 1);
	}
}
 */
