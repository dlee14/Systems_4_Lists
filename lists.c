#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void print_list(struct node * ptr) {
  while (ptr) {
    printf("%d,", ptr->i);
    ptr = ptr->next;
  }
  printf("NULL\n");
}

struct node * insert_front(struct node * ptr, int n) {
  struct node * new = (struct node *)malloc(sizeof(struct node));
  new->i = n;
  new->next = ptr;
  return new;
}

struct node * free_list(struct node * ptr) {
  while (ptr) {
    struct node *temp = ptr;
    ptr = ptr->next;
    free(temp);
  }
  return ptr;
}
