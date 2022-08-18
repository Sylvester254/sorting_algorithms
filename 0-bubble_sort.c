#include "sort.h"
#include <stdlib.h>
/**
 * bubble_sort - sorts an array of int using bubble sort algorithm(asc).
 *
 * @array: the array to sort
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int sorted, k;
for (i = 0; i < size; i++)
{
sorted = 0;
for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
k = array[j];
array[j] = array[j + 1];
array[j + 1] = k;
sorted = 1;
print_array(array, size);
}
}
if (!sorted)
{
break;
}
}
}
