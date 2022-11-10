#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry
 * @argc: size of cl args
 * @argv: actual array of args
 * Return: zero
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
