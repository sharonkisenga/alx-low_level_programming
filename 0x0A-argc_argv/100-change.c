#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimun number of coins to make change of amount of money
 * @argc: the number of argument
 * @argv: an array of pointers to the argument
 * return: if the number of argument is not exactly 1 - 1 otherwise - 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
	if ((cents - 25) >= 0)
	{
		cents -= 25;
		continue;
	}
	if ((cents - 10) >= 0)
	{
		cents -= 10;
		continue;
	}
	if ((cents - 5) >= 0)
	{
		cents -= 5;
		continue;
	}
	if ((cents - 2) >= 0)
	{
		cents -= 2;
		continue;
	}
	cents--;
	}
	printf("%d\n", coins);
	return (0);
}
