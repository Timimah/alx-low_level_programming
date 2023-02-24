#include <stdio.h>

/**
 * main - prints the lowercase alphabet in revaerse
 * Return: main returns zero (ie. success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
