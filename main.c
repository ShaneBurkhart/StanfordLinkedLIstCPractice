#include "linked_list.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
  Node* head = NULL;

  head = malloc(sizeof(Node));

  head->data = 1;

  printf("Initial length: %d\n", length(head));

  push(&head, 11);
  printf("Push length: %d\n", length(head));

  appendNode(head, 1);
  printf("Append length: %d\n", length(head));

  printf("Head value: %d\n", head->data);
  removeNode(&head, head);
  printf("Removed length: %d\n", length(head));
  printf("Head value: %d\n", head->data);

  return 0;
}


