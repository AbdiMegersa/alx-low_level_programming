#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @a: first element
 * @b: second element
 *
 * Return: a
 */
char *_strcat(char *a, char *b)
{
        int x, y, i, j;

        while (a[i] != '\0')
        {
                i++;
        }
        while (b[j] != '\0')
        {
                j++;
        }
        x = i + j;
        for (y = 0; y < x; y++)
        {
                a[y + i] = b[y];
        }
        return a;
}
