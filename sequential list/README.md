# Sequential List (SeqList) Data Structure

## Overview

This project provides an implementation of a sequential list in C. The sequential list is a data structure that stores elements in a contiguous block of memory, allowing efficient indexing and modification of elements. This README describes the data structure, its operations, and provides examples of usage.

## Structure Definition

The `SeqList` structure is defined as follows:

```c
typedef struct {
    int *data;       // Pointer to the array of elements
    int currentSize; // Number of elements currently in the list
    int maxSize;     // Maximum number of elements the list can hold
} SeqList;
