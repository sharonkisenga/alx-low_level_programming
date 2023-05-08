#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 * return: always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int j, n, sum1 = 0, sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sum1 = sum1 + a[j];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
