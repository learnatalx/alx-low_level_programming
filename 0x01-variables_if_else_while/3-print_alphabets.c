#include <stdio.h>
/**
 *main -entry point
 * Return: always zero
 */
int main(void)
{
int i, j;
for (i = 97; i < 123; i++)
{
putchar(i);
}
for (j = 65; j < 91; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
