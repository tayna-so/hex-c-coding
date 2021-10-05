/*
 * File: 1-swap.c
 * Auth: Tayna Sousa
 */

#include "holberton.h"

/**
 * swap_int - it swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
