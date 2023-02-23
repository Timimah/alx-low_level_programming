#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random value to
 * variable n and tells us if that number 
 * is positive, negative or zero
 * Return: main returns zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(n, "is positive", %d, %s);
	else if (n < 0)
		printf(n, "is negative", %d, %s);
	else
		printf(n, "is zero", %d, %s);
	return (0);
}
