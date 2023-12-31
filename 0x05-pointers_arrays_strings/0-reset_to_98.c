#!/bin/bash
#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by n to 98
 * @n: Pointer to an integer
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);

	/* Call the function to reset n to 98 */
	reset_to_98(&n);

	printf("n=%d\n", n);

	return (0);
}

