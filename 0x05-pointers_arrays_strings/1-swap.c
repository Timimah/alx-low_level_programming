#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first argument, points to an int
 * @b: second argument,points to an innteger
 * Return: 0 (i.e. success)
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
