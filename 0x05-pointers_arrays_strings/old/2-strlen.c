#include <stdio.h>
/**
 *_strlen - the length of char array
 *@s: the string or char array
 *Return: the length of the string
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
