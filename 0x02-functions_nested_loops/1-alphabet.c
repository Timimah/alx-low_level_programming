#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return: 0 (i.e. success)
 */
void print_alphas(void)
{
	char alphas;

	for (alphas =  'a'; alphas <= 'z'; alphas++)
		_putchar(alphas);
	_putchar('\n');
}
