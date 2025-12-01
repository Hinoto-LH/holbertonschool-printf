#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* _printf - function that print
* Return: return count
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
		{'%', print_percent},
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
			index++; 
			
			for (j = 0; SpeciArray[j].Choise != '\0'; j++)
			{
				if (format[index] == SpeciArray[j].Choise)
				{
					count += SpeciArray[j].func(args);
				}
			}
		}
		else
		{
			write(1, &format[index], 1);
			count++;
		}
		index++;
	}
	va_end(args);
	return (count);
}
