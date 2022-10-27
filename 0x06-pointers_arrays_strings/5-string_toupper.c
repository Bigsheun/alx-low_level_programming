/**
* string_toupper - convert string to upper
* @s: String to convert
*
* Return: the converted
*/
char *string_toupper(char *s)
{
	int i, gap;

	gap = 'a' - 'A';
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= gap;
		++i;
	}
	return (s);
}
