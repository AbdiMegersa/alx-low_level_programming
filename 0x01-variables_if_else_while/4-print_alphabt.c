#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet lower case except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
