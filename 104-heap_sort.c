#include "sort.h"

/**
 * heap_sort - Sort an array of integers in ascending
 *             order using the heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements sift-down heap sort
 * algorithm. Prints the array after each swap.
 */
void heap_sort(int *array, size_t size)
{
	int j;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (j = (size / 2) - 1; j >= 0; j--)
	{
		max_heapify(array, size, size, j);
	}

	for (j = size - 1; j > 0; j--)
	{
		swap_integer(array, array + j);
		print_array(array, size);
		max_heapify(array, size, j, 0);
	}
}
/**
 * swap_integer - Swap two integers in an array.
 * @a: first integer to swap.
 * @b: second integer to swap.
 */
void swap_integer(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * max_heapify - Turn a binary tree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array/tree.
 * @base: The index of the base row of the tree.
 * @root: The root node of the binary tree.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t toward_left, toward_right, large;

	toward_left = 2 * root + 1;
	toward_right = 2 * root + 2;
	large = root;

	if (toward_left < base && array[toward_left] > array[large])
		large = toward_left;
	if (toward_right < base && array[toward_right] > array[large])
		large = toward_right;

	if (large != root)
	{
		swap_integer(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}
