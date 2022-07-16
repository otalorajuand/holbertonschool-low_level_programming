#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints everything.
 * @format: a string that tells the format of each argument.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	int len = strlen(format);
	char *str, *separator = "";

	va_start(ap, format);
	i = 0;
	if (format != NULL)
	{
		while (i < len)
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
					break;
				}
				printf("%s%s", separator, str);
				break;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}

