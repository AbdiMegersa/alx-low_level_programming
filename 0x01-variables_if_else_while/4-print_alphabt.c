#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet lower case except q and e
 * return 0 if success
 */
int main(void)
{
	char i;

	for (i = 'a'; (i != 'e' && i != 'q'); i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
