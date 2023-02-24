#include <stdio.h>

/**
 * main - prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: main returns 0 (ie success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
		putchar(number);
	}
	return(0);
}
