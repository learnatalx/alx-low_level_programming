#include <stdio.h>
#include "main.h"
/**
*swap_int - swaps functions
*@a: the first param
*@b: the second paratm
*Return: no
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
