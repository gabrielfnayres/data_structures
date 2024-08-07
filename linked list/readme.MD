# Linked List Implementation in C

This repository contains a C implementation of a singly linked list. The implementation includes various operations such as insertion, deletion, and traversal. This README provides an overview of the functionality and usage of the linked list.

## Files

- `linked_list.h`: Header file containing the definitions of the linked list and node structures, and the function prototypes.
- `linked_list.c`: Source file implementing the linked list operations.
- `main.c`: Demonstrates the usage of the linked list functions.

## Data Structures

### Node

A `Node` structure contains:
- `int content`: The data stored in the node.
- `Node* next`: Pointer to the next node in the list.

### LinkedList

A `LinkedList` structure contains:
- `Node* head`: Pointer to the first node in the list.
- `int size`: The current number of nodes in the list.

## Functions

### Node Management

- `Node* createNode()`: Creates and initializes a new node with `content` set to 0 and `next` set to `NULL`.

### Linked List Management

- `LinkedList* createLinkedList()`: Creates and initializes a new linked list with `head` set to `NULL` and `size` set to 0.
- `void printLL(LinkedList* ll)`: Prints the elements of the linked list.
- `int empty(LinkedList* ll)`: Returns 1 if the list is empty, otherwise returns 0.
- `int full(LinkedList* ll)`: Returns 1 if the list is full (with a maximum size defined by `MAXTAM`), otherwise returns 0.
- `int getSize(LinkedList* ll)`: Returns the current size of the linked list.
- `int getElement(LinkedList* ll, int pos)`: Returns the element at the specified position (1-based index). Returns -1 if the position is out of bounds.
- `int getPos(LinkedList* ll, int data)`: Returns the position of the first occurrence of the specified data. Returns -1 if the data is not found.
- `int change_element(LinkedList* ll, int pos, int data)`: Changes the element at the specified position to the given data. Returns 1 on success, -1 on failure.

### Insertion

- `int insert(LinkedList* ll, int pos, int data)`: Inserts a new node with the given data at the specified position. Supports inserting at the beginning, middle, or end of the list.

### Removal

- `int removeel(LinkedList* ll, int pos)`: Removes the node at the specified position and returns the data of the removed node. Returns -1 if the position is out of bounds.

## Example Usage

The `main.c` file provides an example of how to use the linked list functions:

1. Create a new linked list.
2. Insert elements at various positions.
3. Print the list and modify elements.
4. Retrieve and print elements.
5. Remove elements and print the list again.
6. Check if the list is empty or full.
7. Free the allocated memory before exiting.

## Compilation

To compile the code, use the following commands:

```sh
gcc -o linked_list main.c linked_list.c
