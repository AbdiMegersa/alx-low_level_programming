#include "main.h"

/*
 * print_alphabet -Entry point
 *
 * description : print alphabets
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

