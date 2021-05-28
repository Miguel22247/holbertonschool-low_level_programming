# 0x1A. C - Hash tables
## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded`

## Tasks
### 0. >>> ht = {}
Write a function that creates a hash table.

* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
where size is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return `NULL`