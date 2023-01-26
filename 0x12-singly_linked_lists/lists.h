#ifndef LIST_H
#define LIST_H
#include <stddef.h>

typedef struct node{
	char *str;
	unsigned int len;
	struct node *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);


#endif
