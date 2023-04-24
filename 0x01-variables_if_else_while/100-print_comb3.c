#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main Entry - point 
 * Description: 'print all possible different combination of two digit'
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 1; n++)
	{
	for (m = n + 1; m <= 57; m++)
	{
	if (m != n)
	{
	putchar(n);
	putchar(m);
	if (n == 57 && m == 57)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
