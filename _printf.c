#include "main.h"

/**
*_printf - function that print
* @format: 
*/
int _printf(const char *format, ...)
{
	Choise Choises [] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{NULL, NULL}
	};

	int index = 0;
	int inc = 0;
	if (format)
	/*si format n'est pas NULL*/
	{
		while (format[index] != '\0')
		{
			/** if (format[index] != '%')
			{
			}
				char c = va_arg(args, int);

				index += 2; */
				/**if (format[index] == '%')*/
				{
				write(1, format, 1);
				}
			format++;
		}
	}
	if (format)
	{
		while (format[index])
		{
			if (format[index] == '%')
			{
				inc++;
				if (index == 'c')
			}
			write(1, format, 1);
		}
		format ++;
	}

return (index);
}
