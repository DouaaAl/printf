#include "main.h"
#include <string.h>

/**
 * printf_s - strings
 * @value: argument
 * Return: argument
 */

int printf_s(va_list value)
{
	char *str;
	int i = 0;

	str = va_arg(value, char *);

	if (str == NULL)
		str = "(nil)";
	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	return ((strlen(str) + 1));
}
