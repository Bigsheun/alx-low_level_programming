/**
* c_to_upper - convert character to upper case
* @c: input character
*
* Return: conversion
*/
char c_to_upper(char c)
{
	int gap;

	gap = 32 ^ 0xff;
	return (c & gap);
}

/**
* leet_dic - look up for leet values
* @c: command-line count
*
* Description: Longer multiline
* section header: Section description
* Return: description
*/
char leet_dic(char c)
{
	int i;
	char Dic[] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};

	for (i = 0; i < 8; i++)
		if ((c_to_upper(c) == Dic[i]) && ('_' != Dic[i]))
			return (i + '0');
	return (c);
}
/**
* leet - convert string to leet
* @s: String to convert
*
* Return: converted
*/
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = leet_dic(s[i]);
		++i;
	}
	return (s);
}

