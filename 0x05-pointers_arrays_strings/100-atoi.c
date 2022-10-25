/**
* _atoi - converts a string to a number
* @s: String to convert
*
* Return: an  integer
*/
int _atoi(char *s)
{
	int value, i, len, sign = 1;

	len = 0;
	while (s[len] != '\0')
		len++;

	i = 0;
	while (i < len && (s[i] < '0' || s[i] > '9'))
	{
		++i;
		if ('-' == s[i])
			sign *= -1;
	}

	value = 0;
	while (s[i] >= '0' && s[i] <= '9' && i < len)
	{
		value = 10 * value + (s[i] - '0');
		i++;
	}

	return (value * sign);
}
