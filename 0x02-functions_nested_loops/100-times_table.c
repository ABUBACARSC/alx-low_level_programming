#include "holberton.h"
#include <stdio.h>
/**
* print_times_table - prints last digit of number
* @n: number to print last digit of
*
* Return: the last digit as an int
*/

void print_times_table(int n)
{
int c, a, b, e, d;
d = n - 1;
if (n >= 0 && n <= 15)
{
for ( a = 0; a <= n; a++)
{
for (b = 0; b <= d; b++)
{
c = a * b;
_putchar(99);
_putchar(44);
_putchar(32);
}
e = a * n;
_putchar(101);
_putchar('\n');
}
}
}
 
