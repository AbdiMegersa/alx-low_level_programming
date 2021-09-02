#include <main.h>

/**
 * _isupper -checks i letter is upper case
 *
 * Return: 1 if uppercase
 * 0 othewise
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
