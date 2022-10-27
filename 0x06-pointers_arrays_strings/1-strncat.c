/**
* _strncat - strncat
* @dest: destination
* @src: source
* @n: number of character
*
* Return: destiation
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, end;

	end = 0;
	while (dest[end] != '\0')
		end++;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[end + i] = src[i];
		++i;
	}
	return (dest);
}

