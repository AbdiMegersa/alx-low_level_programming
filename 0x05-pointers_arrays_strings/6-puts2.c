#include "main.h"
/**
 * puts2 - print other characters
 * @s: pointer
 *
 * Return: void
 */
void puts2(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	for (j = 0; j < i; j+=2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
