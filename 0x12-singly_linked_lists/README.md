This is my first README on 0x12. C - Singly linked lists
C
Algorithm
Data structure

This is a list library project. It contains functions to create, add elements to, print and free a list. The library uses a doubly linked list. The list elements are of type list_t, which contains a pointer to the next element, a pointer to the previous element, and a string.

To create a list, use the function list_create(). This function returns a pointer to the new list. To add an element to the list, use the function add_node() or add_node_end(). These functions add a new node to the beginning or end of the list, respectively. The new node contains the specified string.

To print the list, use the function print_list(). This function prints the string of each node in the list. The number of nodes in the list is returned by the function list_len().

To free the list, use the function free_list(). This function frees all the
