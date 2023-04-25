#include <stdio.h>
/**
 * main - print the sum of even fibonacci numbers
 * description: finds and prints the sum of the even-valued terms, followed by a new line
 * return: nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 40000000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
