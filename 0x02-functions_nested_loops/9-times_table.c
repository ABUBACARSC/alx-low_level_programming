#include <stdio.h>
#include "holberton.h"
/**
*  *times_table- prints every minute of the day of Jack Bauer,
**starting from 00:00 to 23:59
**
** Return: void
*
*/
void times_table(void)
{
int n, x, y;
for (n = 0; n <= 9; n++)
{
for (x = 0; x <= 9; x++)
{
y = x * n;
printf("%d", y);
_putchar(',');
}
_putchar('\n');
}
}

