#include "holberton.h"
#include <stdio.h>
/*
*main _ calls fibonacci
*/
int main(void)
{
unsigned long a, b, c, d;
a = 1;
b = 2;
c = 0;
d = 2;
while (c <= 4000000)
{
c = a + b;
if (c % 2 == 0)
{
d = d + c;
}
a = b;
b = c;
}
printf("%ld\n", d);
return (0);
}


