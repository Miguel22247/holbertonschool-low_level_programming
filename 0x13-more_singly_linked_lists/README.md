# 0x13. C - More singly linked lists

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is 
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will * use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
* Don’t forget to push your header file
* All your header files should be include guarded
## More Info
Please use this data structure for this project:
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
## Tasks
### 0. Print list

Write a function that prints all the elements of a listint_t list.

* Prototype: ```size_t print_listint(const listint_t *h);```
* Return: the number of nodes
* Format: see example
* You are allowed to use printf


### 1. List length

Write a function that returns the number of elements in a linked listint_t list.

* Prototype: ```size_t listint_len(const listint_t *h);```


### 2. Add node

Write a function that adds a new node at the beginning of a listint_t list.

* Prototype: ```listint_t *add_nodeint(listint_t **head, const int n);```
* Return: the address of the new element, or NULL if it failed


### 3. Add node at the end

Write a function that adds a new node at the end of a listint_t list.

* Prototype: ```listint_t *add_nodeint_end(listint_t **head, const int n);```
* Return: the address of the new element, or NULL if it failed


### 4. Free list

Write a function that frees a listint_t list.

* Prototype: ```void free_listint(listint_t *head);```


### 5. Free

Write a function that frees a listint_t list.

* Prototype: ```void free_listint2(listint_t **head);```
* The function sets the head to NULL

### 6. Pop

Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

* Prototype: ```int pop_listint(listint_t **head);```
* if the linked list is empty return 0


### 7. Get node at index

Write a function that returns the nth node of a listint_t linked list.
* Prototype: ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);```
* where index is the index of the node, starting at 0
* if the node does not exist, return NULL


### 8. Sum list

Write a function that returns the sum of all the data (n) of a listint_t linked list.
* Prototype: ```int sum_listint(listint_t *head);```
* if the list is empty, return 0


### 9. Insert

Write a function that inserts a new node at a given position.
* Prototype: ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```
* where idx is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL


### 10. Delete at index

Write a function that deletes the node at index index of a listint_t linked list.

* Prototype: ```int delete_nodeint_at_index(listint_t **head, unsigned int index);```
where index is the index of the node that s### hould be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed