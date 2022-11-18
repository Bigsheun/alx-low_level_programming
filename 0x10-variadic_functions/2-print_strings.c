#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function to print n strings
* @separator: to print between strings
* @n: number of string to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "Nil";

		if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");
	va_end(ap);
}

