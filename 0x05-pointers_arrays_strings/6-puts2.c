#include "main.h"
/**
 * puts2 - print other characters
 * @s: pointer
 *
 * Return: void
 */
void puts2(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		if (i % 2 == 0)
		{
		_putchar(s[i]);
		}
		else
		{
			continue;
		}
		i++;
	}
	_putchar('\n');
}
