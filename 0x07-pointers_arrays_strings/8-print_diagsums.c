#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sumA, sumB, x;

	sumA = 0;
	sumB = 0;

	for (x = 0; x < size; x++)
	{
		sumA = sumA + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sumB += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sumA, sumB);
}
