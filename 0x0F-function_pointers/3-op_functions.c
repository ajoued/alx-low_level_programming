#include "calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first operand
 * @b: second operand
 * Return: the result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: first operand
 * @b: second operand
 * Return: the result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first operand
 * @b: second operand
 * Return: the result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first operand
 * @b: second operand
 * Return: the result of operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two integers
 * @a: first operand
 * @b: second operand
 * Return: the rest of operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
