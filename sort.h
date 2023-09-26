#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum boolean - Enumeration of Boolean values.
 * @is_false: Equals 0.
 * @is_true: Equals 1.
 */
typedef enum boolean
{
	is_false = 0,
	is_true = 1
} boolean;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Helper functions for our sorting Algorithms*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
char *_memset(char *str, char b, unsigned int n);
char *_memcpy(char *destination, char *source, unsigned int n);
void merge_sort_main(int *array, int *tmp, int lower, int higher);
void merge(int *array, int *tmp, int lower, int mid, int higher);
void print_array_range(int *array, int lower, int higher, char *title);
char *_memcpy(char *destination, char *source, unsigned int n);
void swap_integer(int *a, int *b);
int hoare_partition(int *array, size_t size,
int toward_left, int toward_right);
void hoare_sort(int *array, size_t size, int toward_left, int toward_right);
void swap_integer(int *a, int *b);
void bitonic_merge(int *array, size_t size, size_t the_start, size_t sequence,
		char flow);
void bitonic_sequence(int *array, size_t size, size_t the_start,
		size_t sequence, char flow);
int get_max(int *array, int size);
void radix_count_sort(int *array, size_t size, int sig, int *buffer);
void radix_sort(int *array, size_t size);
void swap_integer(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
