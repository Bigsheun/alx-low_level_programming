#include <stdlib.h>
/**
*  binary_to_uint - convert string binary representation to unsigned
* @b: string rtepresentation 
*
* Return: conversion
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int i = 0;

	if(b == NULL)
		return (0);

	while(b[i] != '\0')
	{
		if(b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		ret = ret * 2 + (b[i] - '0');
		++i;
	}

	return (ret);
}

