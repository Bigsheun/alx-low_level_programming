#include "main.h"

/**
* _isalpha - Check for alphabet
*
* @c: character to check
* Return:  0=> false, 1=>true.
*/

int _isalpha(int c)

{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}

