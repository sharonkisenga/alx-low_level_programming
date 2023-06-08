#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	
	binary_number(n >> 1);
	_putchar((n & 1) + '0');
}
