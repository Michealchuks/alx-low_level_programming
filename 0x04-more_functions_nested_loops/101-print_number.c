#include "main.h"
#include <stdio.h>
/**
* print_number - Prints a number
* @n: The number to print
*
* Return: Always 0.
*/

void print_number(int n)
{
unsigned int m;

if (n < 0)
{
_putchar('-');
m = -n;
}
else
{
m = n;
}
if (m / 10 != 0)
print_numeber(m / 10);
_putchar((m % 10) + '0');
}
