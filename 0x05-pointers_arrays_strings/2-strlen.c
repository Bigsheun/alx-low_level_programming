/**
* _strlen - a function that works like strlen
* @s: string
*
* Return: length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while ('\0' != *(s++))
		len++;
	return (len);
}

