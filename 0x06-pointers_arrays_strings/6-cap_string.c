#include "main.h"
/**
* is_separator - detects word separators
* @c: Character to test
*
* Return: true or false
*/
short is_separator(char c)
{
	short ttrue = (1 == 1), ffalse = (1 == 0);

	if (c == ' ')
		return (ttrue);
	else if (c == '\t')
		return (ttrue);
	else if (c == '\n')
		return (ttrue);
	else if (c == ',')
		return (ttrue);
	else if (c == ';')
		return (ttrue);
	else if (c == '.')
		return (ttrue);
	else if (c == '!')
		return (ttrue);
	else if (c == '?')
		return (ttrue);
	else if (c == '"')
		return (ttrue);
	else if (c == '(')
		return (ttrue);
	else if (c == ')')
		return (ttrue);
	else if (c == '{')
		return (ttrue);
	else if (c == '}')
		return (ttrue);
	else
		return (ffalse);
}
/**
* c_to_upper - convert character to upper case
* @c: input character
*
* Return: conversion
*/
char c_to_upper(char c)
{
	int gap;

	gap = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		return (c - gap);
	return (c);
}
/**
* cap_string - capitalize words
* @s: String
*
* Return: conversion
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
			if (s[i + 1] != '\0')
				s[i + 1] = c_to_upper(s[i + 1]);
		++i;
	}
	/*End while*/
	return (s);
}

