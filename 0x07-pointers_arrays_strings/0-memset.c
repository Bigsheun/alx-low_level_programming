/**
* _memset - sets memory with same bytes
* @s: memory
* @b: character to put
* @n: number of times
*
* Return: s. buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
