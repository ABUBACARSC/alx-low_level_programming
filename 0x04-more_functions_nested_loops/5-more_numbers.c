#include "holberton.h"
#include <stdio.h>

/**
*  * more_numbers - Print numbers between 0 to 14 incl.
*   *
*    * Return: Void.
*/


int more_numbers(void)

{
int i, j;
for (int i=0; i<10; i++)
{
for (j=0; j<14; j++)
{
_putchar(j);
}
_putchar("/n");
}
return (0);
}

