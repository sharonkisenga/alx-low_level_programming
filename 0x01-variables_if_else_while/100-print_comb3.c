#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'write a script that print all possible different combination of two digit'
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{

	for (m = n + 1; n <= '9'; m++)
	{	
	if (m != n)
	{
	putchar(n);
	putchar(m);
	if (n == '8' && m == '9')
	continue;
	putchar(',');
	return (' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
