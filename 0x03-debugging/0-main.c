#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
void positive_or_negative(void)
{
	int n;

	n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	printf("\n");
}

int main(void)
{
        positive_or_negative(i);
        return (0);
}

