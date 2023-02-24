#include <stdio.h>

/**
 * main - prints the alphabet from a - z
 * in lowercase
 * Return: main returns zero when the
 * program is successful
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
