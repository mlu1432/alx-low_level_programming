# 0x17. Doubly Linked Lists project

## Table of Contents

- Print list(#print-list)
- List length(#list-length)
- Add node(#add-node)
- Add node at the end(#add-node-at-the-end)
- Free list(#free-list)
- Get node at index(#get-node-at-index)
- Sum list(#sum-list)
- Insert at index(#insert-at-index)
- Delete at index(#delete-at-index)
- Crackme4(#crackme4)
- Palindromes(#palindromes)
- Crackme5(#crackme5)

## Print list

Write a function that prints all the elements of a dlistint_t list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

## List length

Write a function that returns the number of elements in a linked dlistint_t list.

- Prototype: `size_t dlistint_len(const dlistint_t *h);`

## Add node

Write a function that adds a new node at the beginning of a dlistint_t list.

- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## Add node at the end

Write a function that adds a new node at the end of a dlistint_t list.

- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

## Free list

Write a function that frees a dlistint_t list.

- Prototype: `void free_dlistint(dlistint_t *head);`

## Get node at index

Write a function that returns the nth node of a dlistint_t linked list.

- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- Return: the address of the new element, or `NULL` if it failed

## Sum list

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

- Prototype: `int sum_dlistint(dlistint_t *head);`

## Insert at index

Write a function that inserts a new node at a given position.

- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- Return: the address of the new node, or `NULL` if it failed

## Delete at index

Write a function that deletes the node at index index of a dlistint_t linked list.

- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Return: 1 if it succeeded, -1 if it failed

## Crackme4

Find the password for crackme4.

- Save the password in the file `100-password`
- file should contain the exact password, no new line, no extra space

## Palindromes

Find the largest palindrome made from the product of two 3-digit numbers.

- Save the result in the file `102-result`
- file should contain the exact result, no new line, no extra space

## Crackme5

Write a keygen for crackme5.

- Usage of the crackme: `./crackme5 username key`
- The crackme will segfault if you do not enter the correct key for the user
- Usage for your keygen: `./keygen5 username`
- keygen should print a valid key for the username
