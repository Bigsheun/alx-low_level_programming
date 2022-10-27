/**
* _strcat - catenate string
* @dest: destination
* @src: source
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, end;

	end = 0;
	while (dest[end] != '\0')
		++end;
	i = 0;
	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		++i;
	}
	src[i] = '\0';
	return (dest);
}

