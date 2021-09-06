#include "main.h"
/**
 * puts_half - print half of the string
 * @s: string
 *
 * Return: (0)
 */
void puts_half(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		for (j = ((i - 1) / 2) - 1; j < i; j++)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
