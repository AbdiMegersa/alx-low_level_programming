/**
 *_strlen - return the length of the string passed
 *@s: pointer
 *
 *Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
