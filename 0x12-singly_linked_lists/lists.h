#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str:
 * string - (malloc'ed string)
 * @len : length of the string
 * @next : points to the next node
 *
 * Description: signly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_s;


size_t print_list(const list_s *h);
size_t list_len(const list_s *h);
list_s *add_node(list_s **head, const char *str);
list_s *add_node_end(list_s **head, const char *str);
void free_list(list_s *head);

#endif /* LIST_H */
