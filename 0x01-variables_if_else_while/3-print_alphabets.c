#include <stdio.h>

/*main - entry point
 *Description: random number in n +ve/-ve
 *Return: 0 on success
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
