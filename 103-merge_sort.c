#include "sort.h"

/**
 * merge_sort - sorts array of integers using merge sort algorithm
 * @array: the array to sort
 * @size: size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *tempr;

	tempr = malloc(size * sizeof(int));
	if (!tempr)
	{
		return;
	}
	_memcpy((char *)tempr, (char *)array, size * sizeof(int));
	merge_sort_main(array, tempr, 0, size - 1);

	free(tempr);
}

/**
 * _memcpy - copies memory area
 *
 * @destination: pointer to the destination memory
 * @source: pointer to the source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination
 */
char *_memcpy(char *destination, char *source, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; ++j)
	{
		*(destination + j) = *(source + j);
	}

	return (destination);
}

/**
 * merge_sort_main - top down mergesort algorithm implementation
 *
 * @array: array to be sorted
 * @lower: lowest index
 * @higher: highest index
 * @tmp: tmp array to to work on the merging
 *
 */
void merge_sort_main(int *array, int *tmp, int lower, int higher)
{
	int mid;

	if (lower < higher)
	{
		mid = (lower + higher - 1) / 2;

		merge_sort_main(array, tmp, lower, mid);
		merge_sort_main(array, tmp, mid + 1, higher);
		merge(array, tmp, lower, mid, higher);
	}
}

/**
 * merge - does the merge operation in mergesort
 * @array: array being sorted
 * @tmp: copy of array to work on the merging
 * @lower: lowest index
 * @mid: middle index
 * @higher: highest index
 *
 */
void merge(int *array, int *tmp, int lower, int mid, int higher)
{
	int i, j, k;

	i = lower, j = mid + 1, k = lower;
	print_array_range(array, lower, mid, "Merging...\n[left]: ");
	print_array_range(array, mid + 1, higher, "[right]: ");
	while (i <= mid && j <= higher)
	{
		if (array[i] < array[j])
		{
			tmp[k++] = array[i++];
		}
		else
		{
			tmp[k++] = array[j++];
		}
	}
	while (i <= mid)
		tmp[k++] = array[i++];
	for (i = lower; i <= higher; i++)
		array[i] = tmp[i];

	print_array_range(array, lower, higher, "[Done]: ");
}

/**
 * print_array_range - modified ver of print array to print
 * elements in specified range
 * @array: the array to print the elements from
 * @lower: lowest index
 * @higher: highest index
 * @title: title to be printed before the array
 */
void print_array_range(int *array, int lower, int higher, char *title)
{
	int k;

	printf("%s", title);

	for (k = lower; k <= higher; ++k)
	{
		printf("%d", array[k]);
		if (k != higher)
		{
			printf(", ");
		}
	}

	printf("\n");
}

