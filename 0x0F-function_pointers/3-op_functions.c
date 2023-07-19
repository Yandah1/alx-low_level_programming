#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -returns the difference of a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the different of sum a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b.
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
