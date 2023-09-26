#include "sort.h"

/**
 * counting_sort - sorts an array of integers using counting sort
 *
 * @array: the array to sort
 * @size: size of the array
 *
 */
void counting_sort(int *array, size_t size)
{
	unsigned int indx, max;
	int *carry, *tempr;

	if (!array || size < 2)
		return;

	max = array[0];
	for (indx = 1; indx < size; ++indx)
		if ((unsigned int)array[indx] > max)
			max = array[indx];

	carry = malloc((max + 1) * sizeof(int));
	if (!carry)
		return;
	tempr = malloc(size * sizeof(int));
	if (!tempr)
		return;

	_memset((char *)carry, 0, (max + 1) * sizeof(int));
	for (indx = 0; indx < size; ++indx)
		carry[array[indx]]++;
	_memcpy((char *)tempr, (char *)array, (size) * sizeof(int));
	for (indx = 0; indx <= max; ++indx)
	{
		if (indx != 0)
			carry[indx] += carry[indx - 1];
		printf("%d", carry[indx]);
		if (indx != max)
			printf(", ");
	}
	printf("\n");
	for (indx = size - 1; ; --indx)
	{
		array[carry[tempr[indx]] - 1] = tempr[indx];
		--carry[tempr[indx]];
		if (indx == 0)
			break;
	}
	free(tempr);
	free(carry);
}

/**
 * _memset - fills memory with a constant byte
 *
 * @str: pointer to memory area
 * @const_byte: constant byte to fill the memory area
 * @no_bytes: number of bytes to be filled
 * Return: pointer to memory area str
 */
char *_memset(char *str, char const_byte, unsigned int no_bytes)
{
	unsigned int j;

	for (j = 0; j < no_bytes ; ++j)
	{
		*(str + j) = const_byte;
	}

	return (str);
}

/**
 * _memcpy - copy a memory area
 *
 * @destination: pointer to the destination memory
 * @source: pointer to the source memory
 * @n: number of bytes to copy
 * Return: pointer to destination
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
