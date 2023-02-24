#include <stdio.h>

/**
 * main - prints all the nubers of base 16
 * in lowercase folllowed by a new line
 * Return: main returns zero (i.e .success)
 */
int main(void)
{
	int numbers;

	int alphas;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers);
	for (alphas = 'a'; alphas <= 'f'; alphas++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
