#include "main.h"
/**
* print_number - that prints an integer
*@n: print int
* Return: Always 0.
*/
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_numeber(num / 10);
}
_putchar(num % 10 + '0');
}
