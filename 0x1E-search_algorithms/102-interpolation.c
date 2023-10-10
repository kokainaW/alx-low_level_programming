#include "search_algos.h"

/**
 * interpolation_search - It searches a value in a sorted array
 * @array: The Array to search in.
 * @size: The length of the array.
 * @value: Value to look for.
 *
 * Return: The 1st value in the array, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;
	double tmp;

	if (!array)
		return (-1);
	while (array[high] != array[low])
	{
		tmp = (double)(high - low) / (array[high] - array[low]);
		pos = low + (tmp * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (value == array[low] ? (int)low : -1);
}
