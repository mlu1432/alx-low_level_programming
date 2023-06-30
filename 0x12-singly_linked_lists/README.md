0x12-singly_linked_lists project
-Task 0
Print list
 a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)

-Task 1
List length
a function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

-Task 2
a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated

-task 3
 Add node at the end
 a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated

-Task 4
Free list
 a function that frees a list_t list.

Prototype: void free_list(list_t *head);

-Task 5
The Hare and the Tortoise
a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

-Task 6
 Real programmers can write assembly code in any language
a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
