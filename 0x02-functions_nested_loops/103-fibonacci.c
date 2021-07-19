#include "holberton.h"
#include <stdio.h>
/*
*main _ calls fibonacci
*/
int main(void)
{
int counter;
counter =0;
unsigned long a, b, c, d;
a = 1;
b = 2;

printf ("%ld, %ld, ", a, b);
while (c <= 4000000)
{
c = a + b;
printf("%ld, ", c)
a = b;
b = c;
}
return (0);
}


