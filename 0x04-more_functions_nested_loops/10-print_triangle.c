#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (x = 1; x <= size; x++)
		{
		for (y = size - x; y > 1; y--)
		{
			_putchar(32);
		}
		for (z = 1; z <= x; z++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
