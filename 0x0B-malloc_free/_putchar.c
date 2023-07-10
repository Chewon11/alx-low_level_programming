#include "main.h"
#include <unistd>
/**
 * _putchar- write the characted c to stdout
 * @c: the characted to print
 *
 * Return: on success 1.
 * on error, -1 is return, and it is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
