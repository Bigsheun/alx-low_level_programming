/**
* string_match - does begining of src match accept?
* @src: source src
* @accept: accept string
*
* Return: true/false
*/
short string_match(char *src, char *accept)
{
	int i = 0;

	while (src[i] != '\0' && accept[i] != '\0' && src[i] == accept[i])
		++i;
	return (accept[i] == '\0');
}

/**
* _strstr - find first match of needle in haystack
* @haystack: String haystack
* @needle: String needle
*
* Return: location pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0' && !string_match(haystack + i, needle))
		i++;

	if (haystack[i] != '\0')
		return (i + haystack);
	else
		return (0);

}
