#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	
	r = _isalpha('H');
	r = _putchar(r + '0');
	r = _isalpha('o');
	r = _putchar(r + '0');
	r = _isalpha(108);
	r = _putchar(r + '0');
	r = _isalpha(';');
	r = _putchar(r + '0');
	r = _putchar('\n');
	return (0);
}
