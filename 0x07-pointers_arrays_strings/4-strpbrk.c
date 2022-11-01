/**
* found_in - checks if c is found in s
* @c: character c
* @s: String s
*
* Return: true if found else false
*/
short found_in(char c, char *s)
{
	short True = (1 == 1), False = (1 == 0);
	int i;

	i = 0;
	while (c != s[i] && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (False);
	else
		return (True);

}

/**
* _strpbrk - find starting point of subset
* @s: string
* @accept: subset
*
* Return: start-point pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i, count;

	i = count = 0;
	if (s[i] == '\0' || accept[i] == '\0')
		return (0);
	while (s[i] != '\0' && !found_in(s[i], accept))
	{
		i++;
		count++;
	}
	if (s[i] == '\0')
		return (0);
	else
		return (s + count);
}
