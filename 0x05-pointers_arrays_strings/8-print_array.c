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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
