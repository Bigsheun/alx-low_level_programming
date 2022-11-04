#include "main.h"

/**
* _islower - checks for lower case characters
* @c: character to compare
* Return: 0 false 1 true.
*/
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

