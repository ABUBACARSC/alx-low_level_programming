#include "holberton.h"

void times_table(void)
{
for (n = 0; n<=9; n++)
{
for (x = 0; x <= 9; x++)
{
y = x*n;
_putchar(y);
_putchar(',');
}
_putchar('\n');
}
}

