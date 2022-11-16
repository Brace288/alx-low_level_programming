#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - Performs addition of two integers
 * @a: integer to be added
 * @b: second integer fo addition
 *
 * Returns: sum of int a and int b
 **/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Performs Ssubtraction operation
 * @a: Number to be subtracted from
 * @b: Number subtracted
 *
 * Returns: difference between a and b
 **/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Returns: Product of a and b
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides int a by int b
 * @a: Numerator
 * @b: Denominator
 *
 * Returns: result
 **/

int op_div(int a, int b)
{

	return (a / b);
}


/**
 * op_mod - performs modulus operation
 * @a: int 1
 * @b: int 2
 *
 * Returns: 0
 **/

int op_mod(int a, int b)
{
	return (a % b);
}
