#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Description: write a program that prints all possible combination of two two digit
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; m <= 98; n++)
	{
	for (m = n + 1; m <= 99; m++)
	{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
	putchar(' ');
	putchar((m / 10) + '0');
	putchar((m % 10) + '0');
	if (n == 98 && m && 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);}
