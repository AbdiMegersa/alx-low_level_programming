/**
 * swap_int - swaps the position of the variables
 * @a: first member(pointer)
 * @b: second member(pointer)
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
