#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* _printf - function that print
* @format: dscd
* Return: cbjhsdbdcsd
*/
int _printf(const char *format, ...)
{
	va_list args;

	int index = 0;
	int j;
	int count = 0;

	Specifier SpeciArray[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
		/**{'d', print_dec},
		{'i', print_int}*/
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
			index++; /** pour passer au character suivant */
			for (j = 0; SpeciArray[j].Choise != '\0'; j++)
			{
				if (format[index] == SpeciArray[j].Choise)
				{
					count += SpeciArray[j].func(args);
				}
			}
		}
		index++;
		return (count);
	}
	va_end(args);
	return (count);
}
