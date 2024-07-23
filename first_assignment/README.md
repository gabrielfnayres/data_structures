# Sorting Algorithms: Selection Sort and Insertion Sort in C

This repository contains C implementations of two fundamental sorting algorithms: Selection Sort and Insertion Sort. Sorting algorithms are essential tools in computer science for arranging elements of an array in a specific order.

## Algorithms Implemented

1. **Selection Sort**:
   - Selection sort is a simple comparison-based sorting algorithm. It works by dividing the input array into two parts: the sorted subarray and the unsorted subarray. Initially, the sorted subarray is empty, and the unsorted subarray is the entire input array. The algorithm repeatedly finds the minimum element from the unsorted subarray and swaps it with the leftmost unsorted element, expanding the boundaries of the sorted subarray.

2. **Insertion Sort**:
   - Insertion sort is another comparison-based sorting algorithm that builds the final sorted array (or list) one element at a time. It iterates through the input elements, expanding the sorted portion of the array by one element in each iteration. It takes the current element and compares it with the elements in the sorted subarray, shifting all greater elements one position to the right to make space for the current element.

## Files in the Repository

- `selection_sort.c`: C implementation of the Selection Sort algorithm.
- `insertion_sort.c`: C implementation of the Insertion Sort algorithm.

## How to Use

### Prerequisites

- C compiler installed on your machine (e.g., GCC for Linux or MinGW for Windows).

### Instructions

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/gabrielfnayres/data_structures
   cd data_structures/first_assignment

2. **Compile the code:**

    ```bash
    make

3. **Run the code:**
 
    ```bash
    ./sorts instancias-num/<instance name>


