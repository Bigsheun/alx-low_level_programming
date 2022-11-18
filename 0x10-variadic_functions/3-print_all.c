#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* get_arg_type - get the type of argument
* @c: input character
* Return: return type (c,i,f, or s)
*/
char get_arg_type(char c)
{
	const char arg_types[] = "cifs";
	int j = 0;

	while (c != arg_types[j] && arg_types[j] != '\0')
		j++;

	return (arg_types[j]);
}

/**
 * print_all - prints all
 * @format: param
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, printed = 0;
	char *str, c;


	va_start(ap, format);
	while (format && format[i])
	{

		c = get_arg_type(format[i]);

		if (printed && c)
			printf(", ");

		switch (c)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
		break;
		case 'i':
			printf("%d", va_arg(ap, int));
		break;
		case 'f':
			printf("%f", va_arg(ap, double));
		break;
		case 's':
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
		break;
		}
		i++;
		printed = (printed || c);
	}

	printf("\n");
	va_end(ap);
}

