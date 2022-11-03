#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_puts_recursion - print recursivley
 *@s: accept character
 *Return: non
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
exit(0);
}
_putchar(*s);
_puts_recursion(s + 1);
}
