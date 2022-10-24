#include <stdio.h>
/**
 *_strlen - the length of char array
 *@s: the string or char array 
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
