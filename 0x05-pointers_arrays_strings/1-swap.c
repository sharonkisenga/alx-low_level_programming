#include <stdio.h>
/**
* swap_int - write a function that swaps the value of integers
* @a: the first integer to be swapped
 * @b: the second integer to be swapped
 * return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
