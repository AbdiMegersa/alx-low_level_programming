#include <stdio.h>

/*
 * main - entry point
 * Description: print lowercase letters then upper case letters
 * return: 0 (Succcess)
 */
int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
