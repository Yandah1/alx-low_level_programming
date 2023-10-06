 This README provides an overview of a set of functions for creating and manipulating hash tables in C. Here's a summary:

1. **Creating a Hash Table**:
   - `hash_table_create()` function creates a new hash table.
   - Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
   - It takes the size of the array as a parameter and returns a pointer to the newly created hash table. If an error occurs, it returns NULL.

2. **Hashing Algorithm (djb2)**:
   - `hash_djb2()` function implements the djb2 hash algorithm.
   - Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
   - This function calculates a hash value for a given string.

3. **Getting Index for a Key**:
   - `key_index()` function determines the index at which a key should be stored in the hash table array.
   - Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
   - It uses the `hash_djb2` function and returns the index.

4. **Adding an Element to the Hash Table**:
   - `hash_table_set()` function adds or updates a key-value pair in the hash table.
   - Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
   - It returns 1 on success and 0 otherwise. In case of a collision, the new node is added at the beginning of the list.

5. **Retrieving a Value by Key**:
   - `hash_table_get()` function retrieves the value associated with a key.
   - Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
   - It returns the value associated with the element or NULL if the key is not found.

6. **Printing the Hash Table**:
   - `hash_table_print()` function prints the key-value pairs in the hash table.
   - Prototype: `void hash_table_print(const hash_table_t *ht);`
   - It prints the keys and values in the order they appear in the array of the hash table.

7. **Deleting a Hash Table**:
   - `hash_table_delete()` function deletes a hash table.
   - Prototype: `void hash_table_delete(hash_table_t *ht);`
   - It frees the memory used by the hash table.

These functions provide a basic framework for working with hash tables in C, allowing users to create, manipulate, and delete hash tables while managing collisions and hash functions.
