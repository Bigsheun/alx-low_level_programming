/**
* _strcmp - compare
* @s1: first
* @s2: second
*
* Return: difference
*/
int _strcmp(char *s1, char *s2)
{
	int i, ret;

	i = 0;
	while ((ret = s1[i] - s2[i]) == 0 && s1[1] != '\0' && s2[i] != '\0')
		++i;
	return (ret);
}

