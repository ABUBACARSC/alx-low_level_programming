#include "holberton.h"

/**
* print_to_98 - prints last digit of number
* @n: number to print last digit of
*
* Return: the last digit as an int
*/

void print_to_98(int n)
{
while (n < 98)
{
_putchar(n);
_putchar(', ')
n++;
}

