#include <stdio.h>
/**
 * main - the entry
 * @argc: size of arguments
 * @argv: the actual array of arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	    printf("%s\n", argv[i]);
	    return (0);
}
