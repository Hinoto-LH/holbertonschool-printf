# **C - printf**


## **Description** 
This project is a simulation of the printf function in C with its most important features, it was made in the software development program of [Holberton](https://www.holbertonschool.com/).
### **description de la fonction printf**
La fonction printf() formate et imprime une série de caractères et de valeurs dans le flux de sortie standard stdout . Les spécifications de format, commençant par le signe de pourcentage (%), déterminent le format de sortie pour toute liste d'arguments suivant la chaîne de format.
## **compilation**
we will compil the code using this command
```bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

## **Requirements**

these are the requirements that we had for this project:

**1. Text Editor:** you are allowed to use vi, vim, nano and emacs to modify the code

**2. Operating System:** this project has to be done on Ubuntu 20.04

**3. Coding Style:** you must use the betty style coding and documentation

**4. authorized functions and macros :** 
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

**5. File Endings:** Ensure that all source code files (.c files) end with a newline character (\n).

**6. Header Inclusion:** Include the "main.h" header file in all .c files to access necessary declarations and definitions.

_printf.c

Version langage : je pense 99

Her functions :

Flowchart


Exemple d'utilisation

**Example Usage**

**Consider the following input code:**

```C

int main(void) {
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}

```

### Expected Output


```bash

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octalCreate a Printf Function

```
