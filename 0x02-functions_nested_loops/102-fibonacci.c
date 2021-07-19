#include "holberton.h"
#include <stdio.h>
/**
* *print_natural:  - prints last digit of number
* *main: calls his friend
* * @n: number to print last digit of
* * Return: the last digit as an int
* */
int main (void)
{
int counter;
counter = 0;
int a, b, c, d;
a = 0;
b = 1;
c = a + b;
while (counter <= 50)
{
a = b;
b = c;
c = a + b;
counter++;
printf("%d" c);
if (counter <= 50)
printf(", ");
}
printf("\n");
}

