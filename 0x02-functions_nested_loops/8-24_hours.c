#include "holberton.h"
/**
 *  * jack_bauer - print jack bauer's day
 *   *
 *    * Return: Void.
 *     */

void jack_bauer(void)
{
int hour, hour2, minute1, minute2;
for (hour =0; hour<24; hour++)
{
for (minute=0; minute<=60; minute++)
{
_putchar (hour);
_putchar (':');
_putchar(minute);
_putchar('/n');
}
}
}

