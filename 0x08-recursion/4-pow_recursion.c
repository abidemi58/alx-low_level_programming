#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: value to raise
 * @y: the power
 * Return: the value of x raised by power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);/* (x * _pow_recursion(x, y + 1)) can also
			     * be returned in this case
			     */
	else
		return (x * _pow_recursion(x, y - 1));
}
