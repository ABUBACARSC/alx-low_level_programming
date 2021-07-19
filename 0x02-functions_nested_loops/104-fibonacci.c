#include "holberton.h"
#include <stdio.h>
/*
* *main: _ calls fibonacci
*/
int main(void)
{
unsigned long a, b, c;

int counter
counter = 3;
a = 1;
b = 2;
c = a + b;
printf("%ld, %ld, ", a, b);
while (counter <= 98)
{
printf("%ld, ", c);
a = b;
b = c;
c = a + b;
}
return (0);
}
