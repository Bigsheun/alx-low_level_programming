#include "main.h"

/**
* set_string - change the value a string pointed to
* @s: address of the string
* @to: new string (address)
*/

void set_string(char **s, char *to)
{
	*s = to;
}
