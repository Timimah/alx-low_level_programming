 #include  <stdio.h>

/**
 * main - prints all possible combinations
 * of single digit numbers seperated by ','
 * followed by a space in ascending order
 * Return: main returns zero (i.e. success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
