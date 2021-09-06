#include "main.h"
/**
 * puts2 - print other characters
 * @str: pointer
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
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(s[j]);
		}
		else if (j % 2 != 0)
		{
			continue;
		}
	}
	_putchar('\n');
}
