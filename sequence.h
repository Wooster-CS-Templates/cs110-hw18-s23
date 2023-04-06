#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <stdlib.h>

/**
 * Creates a dynamically allocated array of random integers within a specified
 * range.
 *
 * Parameters:
 *   count - the number of integers in the array
 *   min - the minimum possible value of any of the integers
 *   max - the maximum possible value of any of the integers
 *
 * Returns:
 *   A pointer to the allocated array
 */
int *create_random_sequence(size_t count, int min, int max);

#endif

