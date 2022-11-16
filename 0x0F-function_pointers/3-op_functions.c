#include "3-calc.h"

/**
* op_add - computes sum of two integers
* @a: first integer
* @b: second integer
*
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - computes the difference of two integers
* @a: first integer
* @b: second integer
*
* Return: difference  a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - compute product of two integers
* @a: first integer
* @b: second integer
*
* Return: the product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - computes the division of two integers
* @a: first integer
* @b: second integer
*
* Return:  the quotient  a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - computes remainder of the division of two integers
* @a: first integer
* @b: second integer
*
* Return: remainder of a / b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
