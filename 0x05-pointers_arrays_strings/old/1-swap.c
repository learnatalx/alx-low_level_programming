#include <stdio.h>
/**
 *swap_int - swaping function
 *@a: first number
 *@b: other number
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
