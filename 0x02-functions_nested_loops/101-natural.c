#include "holberton.h"
#include <stdio.h>
/**
* print_times_table - prints last digit of number
* @n: number to print last digit of
* Return: the last digit as an int
*/
int print_natural(int n);

int main(void)
{
print_natural(1023);
return (0);
}

int print_natural(int n)
{
int a, b, c, d;
a = 0;
d = 0;
for (c = 0; c <= n; c++)
{
b = c;
if (b % 3 == 0 && b % 5 == 0)
{
a = a + b;
}
else
{
d = d + b;
}
}
printf("%d", a);
return (a);
}

