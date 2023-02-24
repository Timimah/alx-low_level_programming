#include <stdio.h>

/**
 * main - prints the alphabet from a - z
 * in lowercase
 * Return: main returns zero when the
 * program is successful
 */
int main(void)
{
	int alpha = 'a';

	putchar("The alphabeths are ");
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
