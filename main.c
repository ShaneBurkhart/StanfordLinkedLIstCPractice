#include "linked_list.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
  Node* head = NULL;

  head = malloc(sizeof(Node));

  head->data = 1;

  printf("Initial length: %d\n", length(head));

  push(&head, 10);
  printf("Push length: %d\n", length(head));

  appendNode(head, 10);
  printf("Append length: %d\n", length(head));



  return 0;
}


