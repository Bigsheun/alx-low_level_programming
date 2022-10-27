/**
* _strncpy - works like strncpy
* @dest: destination
* @src: sorce
* @n: count
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

