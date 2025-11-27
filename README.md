# README - _Printf


## Description
La fonction printf() formate et imprime une série de caractères et de valeurs dans le flux de sortie standard stdout . Les spécifications de format, commençant par le signe de pourcentage (%), déterminent le format de sortie pour toute liste d'arguments suivant la chaîne de format.

# Prototype
int _printf(const char *format, ...);

# header
'#include "main.h"'

# Goal
Écrire du texte sur la sortir standard

Snippets code 
#include "main.h"

int main(void)
{
    _printf("Hello world!\n");
    return 0;
}

# Compilateur
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

# Requirements


_printf.c

Version langage : git version 2.50.1 (Apple Git-155)

Her functions :

Flowchart


Exemple d'utilisation