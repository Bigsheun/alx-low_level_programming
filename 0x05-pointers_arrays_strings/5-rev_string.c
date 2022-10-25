/**
* swpch - swap characters
* @a: pointer to first ch
* @b: pointer to second ch
*
*/
void swpch(char *a, char *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* rev_string - reverses a string
* @s: The strng  to reverse
*
*/
void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[i++] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
		swpch(s + i, s + len - i - 1);
}

