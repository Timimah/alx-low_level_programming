#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in lower
 * and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char ch;
	char ch_upper;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		ch_upper = toupper(ch);
		putchar(ch_upper);
	}
	putchar('\n');
	return (0);
}
