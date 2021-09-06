#include "main.h"
/**
 * print_array - print arrays
 * @a: first member
 * @n: second member
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[n-1]);
	_putchar('\n');
}
