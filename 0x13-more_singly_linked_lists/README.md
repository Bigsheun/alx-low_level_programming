# 0x13. C - More singly linked lists

- __[ALX-Projects](github.com/Bigsheun)__ - high quality software projects


You will like those projects!


 ![A picture of Bigsheun](https://avatars.githubusercontent.com/u/88635898?s=120&v=4 "Bigsehun")
___
### More Linked List:
Using the following list structure
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
### GitHub repository: 
    alx-low_level_programming

### Directory: 
    0x13-more_singly_linked_lists
___

Nov 28, 2022 6:00 AM
#### General Target
 - How to use linked lists
 - To look for the right source of information without too much help

#### Tasks
 - 0. Print list <br />
File: 0-print_listint.c<br />
Prototype: ```c size_t print_listint(const listint_t *h); ```<br />
 - 1. List length<br />
File: 1-listint_len.c<br />
Prototype: ```c size_t listint_len(const listint_t *h); ```<br />
 - 2. Add node<br />
File: 2-add_nodeint.c<br />
Prototype: ```c listint_t *add_nodeint(listint_t **head, const int n); ```<br />
 
 - 3. Add node at the end <br />
File: 3-add_nodeint_end.c<br />
Prototype: ```c listint_t *add_nodeint_end(listint_t **head, const int n); ```<br />
 - 4. Free list<br />
File: 4-free_listint.c<br />
Prototype: ```c void free_listint(listint_t *head); ```<br />

 - 5. Free<br />
File: 5-free_listint2.c<br />
Prototype: ```c void free_listint2(listint_t **head); ```<br />
 
 - etcetera