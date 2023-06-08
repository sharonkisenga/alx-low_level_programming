#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: is pointing to a string
 * return: converted number or 0 if there is 1
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned num_dec = 0;

	if (!b)
	return (0);
	for (k = 0; b[k]; k++)
	{
	if (b[k] < '0' || b[k] > '1')
	return (0);
	num_dec = 2 * num_dec + (b[k] - '0');
	}
	return (num_dec);
}
