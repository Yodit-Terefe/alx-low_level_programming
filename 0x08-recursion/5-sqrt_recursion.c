#include "main.h"

int actual_sqrt_recursion(int y, int t);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int y)
{
	if (y < 0)
		return (-1);
	return (actual_sqrt_recursion(y, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int y, int t)
{
	if (t * i > y)
		return (-1);
	if (t * t == y)
		return (t);
	return (actual_sqrt_recursion(y, t + 1));
}

