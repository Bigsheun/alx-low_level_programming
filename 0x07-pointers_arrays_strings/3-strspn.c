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
* _strspn - count number of times initial chars of s found in accept
* @s: String s
* @accept: string
*
* Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, count = 0;

	while (s[i] != '\0' && found_in(s[i], accept))
	{
		count++;
		i++;
	}
	return (count);
}
