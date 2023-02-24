#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 * Return: main returns 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 11; number++)
	{
		printf("%d", number, "\n");
	}
	return (0);
}
