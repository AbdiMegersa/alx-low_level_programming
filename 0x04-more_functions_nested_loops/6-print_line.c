#include "main.h"
/**
 * print_line - print straight line in the terminal
 */
void print_line(int n)
{
	int i;


	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
