#include "main.h"

/**
*_printf - function that print
* @format: 
*/
int _printf(const char *format, ...)
{
	va_list args;

	int index = 0;
	int inc = 0;
	int count = 0;

	Choise_s Choises[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{"\0", NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);


	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				var_end(args);
				return (-1);
			}
		}
	}
	for (; Choises[inc].Choise != '\0'; inc++)
	{
		if (format[index] == Choises[inc].Choise)
		{
			count += Choises[inc].func(args);
			break;
		}
	}
}
