#include "sort.h"

/**
 * radix_sort - Sort an array of integers in ascending
 *              order using the radix sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the LSD radix sort algorithm. Prints
 * the array after each significant digit increase.
 */
void radix_sort(int *array, size_t size)
{
	int max, sig, *buffer;

	if (array == NULL || size < 2)
		return;

	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return;

	max = get_max(array, size);
	for (sig = 1; max / sig > 0; sig *= 10)
	{
		radix_count_sort(array, size, sig, buffer);
		print_array(array, size);
	}

	free(buffer);
}

/**
 * get_max - Gets maximum value in an array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * Return: maximum integer in the array.
 */
int get_max(int *array, int size)
{
	int max, j;

	for (max = array[0], j = 1; j < size; j++)
	{
		if (array[j] > max)
			max = array[j];
	}

	return (max);
}

/**
 * radix_count_sort - Sort significant digits of an array of integers
 *                       in ascending order using the counting sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 * @sig: significant digit to sort on.
 * @buffer: buffer to store the sorted array.
 * Return: void
 */
void radix_count_sort(int *array, size_t size, int sig, int *buffer)
{
	int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	size_t j;

	for (j = 0; j < size; j++)
	{
		count[(array[j] / sig) % 10] += 1;
	}

	for (j = 0; j < 10; j++)
	{
		count[j] += count[j - 1];
	}

	for (j = size - 1; (int)j >= 0; j--)
	{
		buffer[count[(array[j] / sig) % 10] - 1] = array[j];
		count[(array[j] / sig) % 10] -= 1;
	}

	for (j = 0; j < size; j++)
	{
		array[j] = buffer[j];
	}
}

