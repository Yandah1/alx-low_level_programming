PROJECT: 0x1E. C - Search Algorithms

## Linear Search

### Functionality

Write a function that searches for a value in an array of integers using the Linear search algorithm.

### Prototype

```c
int linear_search(int *array, size_t size, int value);
```

- `array`: A pointer to the first element of the array to search in.
- `size`: The number of elements in the array.
- `value`: The value to search for.

### Return

The function must return the first index where the value is located. If the value is not present in the array or if the array is NULL, the function must return -1.

### Printing

Every time a value in the array is compared to the target value during the search, the function should print the value being compared.


## Binary Search

### Functionality

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

### Prototype

```c
int binary_search(int *array, size_t size, int value);
```

- `array`: A pointer to the first element of the array to search in.
- `size`: The number of elements in the array.
- `value`: The value to search for.

### Return

The function must return the index where the value is located. If the value is not present in the array or if the array is NULL, the function must return -1.

### Printing

Print the array being searched every time it changes, for example, at the beginning and when searching a subarray.


```

## Big O Notations

### Big O #0

**Question:** What is the time complexity (worst case) of a linear search in an array of size n?

### Big O #1

**Question:** What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### Big O #2

**Question:** What is the time complexity (worst case) of a binary search in an array of size n?

### Big O #3

**Question:** What is the space complexity (worst case) of a binary search in an array of size n?

### Big O #4

**Question:** What is the space complexity of this function/algorithm?
