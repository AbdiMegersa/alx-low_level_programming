#include "main.h"

/**
 * print_numbers - print number from 0 - 9
 *
 * return: 0 (Success)
 */
void print_numbers(void)
{
	int i;
	
	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
