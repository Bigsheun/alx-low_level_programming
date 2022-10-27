/**
* reverse_array - reverse array
* @a: array
* @n: size
*
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	if (n < 1)
		return;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

