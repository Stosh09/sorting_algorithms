#include "sort.h"

/**
 * bitonic_sort - Sort an array of integers in ascending
 *                order using the bitonic sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap. Only works for
 * size = 2^k where k >= 0 (ie. size equal to powers of 2).
 */
void bitonic_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	bitonic_sequence(array, size, 0, size, UP);
}

/**
 * swap_integer - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_integer(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bitonic_merge - Sort a bitonic sequence inside an array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * @the_start: starting index of the sequence in array to sort.
 * @sequence: size of the sequence to sort.
 * @flow: The direction to sort in.
 */
void bitonic_merge(int *array, size_t size, size_t the_start, size_t sequence,
		char flow)
{
	size_t i, jump = sequence / 2;

	if (sequence > 1)
	{
		for (i = the_start; i < the_start + jump; i++)
		{
			if ((flow == UP && array[i] > array[i + jump]) ||
			    (flow == DOWN && array[i] < array[i + jump]))
				swap_integer(array + i, array + i + jump);
		}
		bitonic_merge(array, size, the_start, jump, flow);
		bitonic_merge(array, size, the_start + jump, jump, flow);
	}
}

/**
 * bitonic_sequence - Convert an array of integers into a bitonic sequence.
 * @array: An array of integers.
 * @size: The size of the array.
 * @the_start: The starting index of a block of the building bitonic sequence.
 * @sequence: The size of a block of the building bitonic sequence.
 * @flow: The direction to sort the bitonic sequence block in.
 */
void bitonic_sequence(int *array, size_t size, size_t the_start,
		size_t sequence, char flow)
{
	size_t cut = sequence / 2;
	char *str = (flow == UP) ? "UP" : "DOWN";

	if (sequence > 1)
	{
		printf("Merging [%lu/%lu] (%s):\n", sequence, size, str);
		print_array(array + the_start, sequence);

		bitonic_sequence(array, size, the_start, cut, UP);
		bitonic_sequence(array, size, the_start + cut, cut, DOWN);
		bitonic_merge(array, size, the_start, sequence, flow);

		printf("Result [%lu/%lu] (%s):\n", sequence, size, str);
		print_array(array + the_start, sequence);
	}
}
