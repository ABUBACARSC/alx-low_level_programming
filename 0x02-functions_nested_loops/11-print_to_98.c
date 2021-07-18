#include "holberton.h"

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
while (n < 99)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 97)
{
printf("%d, ", n);
n--;
}
}
else 
{
printf("%d", 98);
}
}
