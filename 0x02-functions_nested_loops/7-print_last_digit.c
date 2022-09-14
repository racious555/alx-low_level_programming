#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: int to be used
 * Return: returns the last digits
 */
int print_last_digit(int n)
{
int l;
if (n < 0)
n = -n;
l = n % 10;
if (l < 0)
l = -l;
_putchar(l + '0');
return (l);
}
