#include "holberton.h"

/**
  * print_last_digit - Takes a value and prints the last digit
  * @n: gets converted to the last digit of the number using modular arithmetic
  * Return: n, the last digit
  */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
