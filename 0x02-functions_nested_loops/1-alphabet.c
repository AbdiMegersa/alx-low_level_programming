#include "holberton.c"

/*
 * main -Entry point
 *  
 * description : print alphabets
 *
 * return: (0) if success
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

