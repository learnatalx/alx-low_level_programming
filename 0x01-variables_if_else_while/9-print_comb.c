#include <stdio.h>
/**
 *main - entry point
 * Return: always zero
 */
int main(void)
{
int i = 0;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
