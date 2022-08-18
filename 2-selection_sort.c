#include "sort.h"
/**
 * selection_sort - sorts an array using Selection sort(ascending)
 *
 * @array: array to sort
 * @size: number of elements of the array
 */
void selection_sort(int *array, size_t size)
{
int current;
size_t i, j;
for (i = 0; i < size; i++)
{
int min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
if (min != i)
{
current = array[i];
array[i] = array[min];
array[min] = current;
print_array(array, size);
}
}
}
