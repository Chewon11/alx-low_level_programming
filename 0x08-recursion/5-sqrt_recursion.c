#include "main.h"

/**
 * helperFunction - checks if sqrt of numbers exists
 * @num: number.
 * @pSqrt: possible sqrt of number.
 * Return: sqrt of number of -1 for error.
 */
int hleperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	else
		return (helperFunction(n, 0));
}
