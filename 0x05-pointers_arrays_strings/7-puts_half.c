#include "main.h"
/**
 * puts_half - print half of the string
 * @s: string
 *
 * Return: (0)
 */
void puts_half(char *s)
{
	int i, j, n;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	for (j = n; j < i; j++)
	{
		_putchar('\n');
	}
}
