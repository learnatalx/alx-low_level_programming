#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - the lst digit
 *Return: last digit number
 *
 */
int print_last_digit(int n)
{
int lst_digit;
lst_digit = n % 10;
_putchar(lst_digit+48);
return (lst_digit);
}
