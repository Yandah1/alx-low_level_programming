
Doubly Linked List Functions
This repository contains a collection of functions for working with doubly linked lists (dlistint_t) in C. These functions allow you to manipulate and perform various operations on doubly linked lists. Below is a brief description of each function along with its prototype and usage.

print_dlistint
size_t print_dlistint(const dlistint_t *h);

This function prints all the elements of a doubly linked list and returns the number of nodes. It takes a pointer to the head of the list as an argument and prints each element's value.

Example:
dlistint_t *head = NULL;
size_t num_nodes = print_dlistint(head);

dlistint_len
size_t dlistint_len(const dlistint_t *h);

This function returns the number of elements in a doubly linked list. It takes a pointer to the head of the list as an argument and counts the number of nodes in the list.

Example:
dlistint_t *head = NULL;
size_t num_elements = dlistint_len(head);

add_dnodeint
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

This function adds a new node at the beginning of a doubly linked list and returns the address of the new element. If it fails to allocate memory, it returns NULL.

Example:
dlistint_t *head = NULL;
dlistint_t *new_node = add_dnodeint(&head, 42);

add_dnodeint_end
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

This function adds a new node at the end of a doubly linked list and returns the address of the new element. If it fails to allocate memory, it returns NULL.

Example:
dlistint_t *head = NULL;
dlistint_t *new_node = add_dnodeint_end(&head, 42);

free_dlistint
void free_dlistint(dlistint_t *head);

This function frees the memory allocated for a doubly linked list. It takes a pointer to the head of the list as an argument and deallocates all nodes in the list.

Example:
dlistint_t *head = NULL;
free_dlistint(head);

get_dnodeint_at_index

This function returns the nth node of a doubly linked list, where index is the index of the node (starting from 0). If the node does not exist, it returns NULL.

Example:
dlistint_t *head = NULL;
dlistint_t *node = get_dnodeint_at_index(head, 2);

sum_dlistint
int sum_dlistint(dlistint_t *head);

This function returns the sum of all the data (n) in a doubly linked list. If the list is empty, it returns 0.

Example:
dlistint_t *head = NULL;
int total_sum = sum_dlistint(head);

insert_dnodeint_at_index
This function inserts a new node at a given position in a doubly linked list. The idx parameter specifies the index where the new node should be added (starting from 0). It returns the address of the new node or NULL if it fails to allocate memory or if the insertion is not possible.

Example:
dlistint_t *head = NULL;
dlistint_t *new_node = insert_dnodeint_at_index(&head, 2, 42);

delete_dnodeint_at_index
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

This function deletes the node at the specified index in a doubly linked list. The index parameter specifies the index of the node to be deleted (starting from 0). It returns 1 if the deletion succeeds and -1 if it fails.

Example:
dlistint_t *head = NULL;
int result = delete_dnodeint_at_index(&head, 2);


