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

	n = m = 48;

	while (n < 58)
	{
		n = 48;
		while (m < 58)
		{
			if (m != n && m < n)
			{
				putchar(n);
				putchar(m);
				if (n == 57 && m == 56)
                                {
                                        break;
                                }
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
