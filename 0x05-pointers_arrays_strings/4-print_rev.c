#include <stdio.h>
#include "main.h"
#include <string.h>
void print_rev(char *s)
{
int i;
for(i=strlen(s);i>0;i--)
{
printf("%c",s[i]);
}
printf("\n");
}
