/** File: 4-rev_array.c  Auth: Tayna Sousa **/
#include "holberton.h"

/**
 * reverse_array - it reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 * Return: nothing
**/

void reverse_array(int *a, int n)
{
    int rev, i;

    for (i = n - 1; i >= n / 2; i--)
    {
        rev = a[n - 1 - i];
        a[n - 1 - i] = a[i];
        a[i] = rev;
    }
}
