#include "main.h"

/**
 * printf_c - main function
 * @val: arguments
 * Return: returns 1
 */

int printf_c(va_list value)
{
	char str;

	str = va_arg(value, int);
	_putchar(str);
	return (1);
}
