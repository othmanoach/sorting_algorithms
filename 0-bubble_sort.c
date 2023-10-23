#include "sort.h"

/**
 * swap_ints - Swap two integers in the array.
 * @num1: The first integer to swap.
 * @num2: The second integer to swap.
 */
void swap_ints(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
