#include "main.h"

/**
 * _print_rev_recursion - Prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_prints_rev_recursion(s + 1);
		_putchar(*s);
	}
}
