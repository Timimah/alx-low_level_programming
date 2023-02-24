#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random value to..
 * variable n and tells us if that number..
 * is positive, negative or zero
 * Return: main returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive %s\n", n);
	else if (n < 0)
		printf("%d is negative %s\n", n);
	else
		printf("%d is zero %s\n", n);
	return (0);
}
