#include <stdio.h>
#include <stdlib.h>
/**
 * main - enttry point
 * @argc: size of arguments
 * @argv: array of actual arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
int coinsInCents, ncoins = 0;
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
coinsInCents = atoi(argv[1]);
while (coinsInCents > 0)
{
if (coinsInCents >= 25)
coinsInCents -= 25;
else if (coinsInCents >= 10)
coinsInCents -= 10;
else if (coinsInCents >= 5)
coinsInCents -= 5;
else if (coinsInCents >= 2)
coinsInCents -= 2;
else if (coinsInCents >= 1)
coinsInCents -= 1;
ncoins += 1;
}
printf("%d\n", ncoins);
return (0);
}
