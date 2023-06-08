#include "main.h"
/**
 * get_bit: returns the value of a bit at a given index
 * @n: number to search
 * @index: is the index starting from 0 of the bit you want to get
 * return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	if ((n & (1 << index)) == 0)
	return (0);
	return (1);
}
