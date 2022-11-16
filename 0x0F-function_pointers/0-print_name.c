#include "function_pointers.h"
/**
* print_name - function to indirectly print string
* @name: String to print
* @f: Function to do the actual printing
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
