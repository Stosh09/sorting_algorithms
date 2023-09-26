#include "sort.h"

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
 * hoare_partition - Orders subset of an array of integers
 *                   according to hoare partition scheme.
 * @array: array of integers.
 * @size: size of the array.
 * @toward_left: starting index of the subset to order.
 * @toward_right: ending index of the subset to order.
 * Return: The final partition index.
 *
 * Description: Uses last element of the partition as the pivot.
 * Prints array after each swap of two elements.
 */
int hoare_partition(int *array, size_t size, int toward_left, int toward_right)
{
	int pivot, from_above, from_below;

	pivot = array[toward_right];

	for (from_above = toward_left - 1, from_below = toward_right + 1;
			from_above < from_below;)
	{
		do {
			from_above++;
		} while (array[from_above] < pivot);
		do {
			from_below--;
		} while (array[from_below] > pivot);

		if (from_above < from_below)
		{
			swap_integer(array + from_above, array + from_below);
			print_array(array, size);
		}
	}

	return (from_above);
}

/**
 * hoare_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @toward_left: The starting index of the array partition to order.
 * @toward_right: The ending index of the array partition to order.
 *
 * Description: Uses the Hoare partition scheme.
 */
void hoare_sort(int *array, size_t size, int toward_left, int toward_right)
{
	int part;

	if (toward_right - toward_left > 0)
	{
		part = hoare_partition(array, size, toward_left, toward_right);
		hoare_sort(array, size, toward_left, part - 1);
		hoare_sort(array, size, part, toward_right);
	}
}

/**
 * quick_sort_hoare - Sort an array of integers in ascending
 *                    order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Hoare partition scheme. Prints
 * the array after each swap of two elements.
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	hoare_sort(array, size, 0, size - 1);
}
