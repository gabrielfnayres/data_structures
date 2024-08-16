# Data Structure: Queue

## Overview

A Queue is a fundamental data structure in computer science that follows the First In, First Out (FIFO) principle. This means that elements are added to the back of the queue and removed from the front. It is analogous to a queue in real life, such as a line at a ticket counter.

## Key Concepts

- **FIFO (First In, First Out):** The first element added to the queue will be the first one to be removed.
- **Enqueue:** The operation of adding an element to the back of the queue.
- **Dequeue:** The operation of removing an element from the front of the queue.
- **Front:** The position from which elements are removed.
- **Rear:** The position where elements are added.

## Basic Operations

1. **Enqueue(item)**
   - **Description:** Adds an item to the back of the queue.
   - **Parameters:** `item` - The item to be added to the queue.
   - **Returns:** `void`
   - **Complexity:** O(1)

2. **Dequeue()**
   - **Description:** Removes and returns the item at the front of the queue.
   - **Parameters:** None
   - **Returns:** `item` - The item that was removed from the front of the queue.
   - **Complexity:** O(1)
   - **Throws:** `UnderflowException` if the queue is empty.

3. **Peek()**
   - **Description:** Returns the item at the front of the queue without removing it.
   - **Parameters:** None
   - **Returns:** `item` - The item at the front of the queue.
   - **Complexity:** O(1)
   - **Throws:** `EmptyQueueException` if the queue is empty.

4. **IsEmpty()**
   - **Description:** Checks if the queue is empty.
   - **Parameters:** None
   - **Returns:** `boolean` - `true` if the queue is empty, `false` otherwise.
   - **Complexity:** O(1)

5. **Size()**
   - **Description:** Returns the number of items in the queue.
   - **Parameters:** None
   - **Returns:** `int` - The number of items in the queue.
   - **Complexity:** O(1)

