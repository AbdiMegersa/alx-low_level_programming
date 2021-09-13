#include "mairen.h"
/**
 * _memset -y  fulls the first n bytes of memory area pointed to.
 * @s: first member
 * @b: second memeber
 * @n: third member
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
