#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

void swap(int *arr, int i, int j);
int partition(int *arr, int l, int r);
void quicksort(int *arr, int l, int r);

#endif