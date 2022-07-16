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
	char *str;

	va_start(ap, format);

	i = 0; 
	while (i < len)
	{
		switch(format[i]){    
		case 'c':
			printf("%c", va_arg(ap, int));
			if (i < len - 1)
				printf(", ");
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			if (i < len - 1)
				printf(", ");
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			if (i < len - 1)
				printf(", ");
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str != NULL)
			{
				printf("%s", str);
			} else 
			{
				printf("(nil)");
			}
			if (i < len - 1)
				printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

