#include <stdio.h>
/**
 *main -entry point
 *@argc: the size of the args
 *@argv: the actual array values
 *Return : the first argument
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc);
return (*argv[0]);
}
