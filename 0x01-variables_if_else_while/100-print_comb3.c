#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main Entry - point 
 * Description: 'write a program that print all possible different combination of two digit'
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
	for (m = n + 1; m <= 9; m++)
	{
	if (m != n)
	{
	putchar(n);
	putchar(m);
	if (n == 0 && m == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
