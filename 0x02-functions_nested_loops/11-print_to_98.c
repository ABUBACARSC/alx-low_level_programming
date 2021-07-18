#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints last digit of number
* @n: number to print last digit of
*
* Return: the last digit as an int
*/

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("%d", 98);
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d", 98);
}
else
{
printf("%d", n);
}
}
