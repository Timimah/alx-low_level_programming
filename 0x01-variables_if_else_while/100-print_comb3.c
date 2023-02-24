#include <stdio.h>

/**
 * main - a program that prints all possible 
 * differrent combinations of two digits
 * that are different followed by a ',' and a space
 * Return: main returns aero (i.e. success)
 */
int main(void)
{
	int n,m;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
