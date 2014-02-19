#include "linked_list.h"
#include<stdio.h>
#include<stdlib.h>

void push(Node** head, int data)
{
  Node* t = malloc(sizeof(Node));
  t->data= data;
  t->next = *head;

  *head = t;
}

void removeNode(Node** head, Node* node)
{
  if(*head == NULL) return;
  Node* t = *head;
  printf("%d\n", node);
  printf("%d\n", t);
  while(t != NULL && t != node)
  {
    t = t->next;
    printf("%d\n", t);
  }
  if(t == NULL) return;
  if(t == *head)
    *head = t->next;
  free(t);
}

void appendNode(Node* head, int data)
{
  Node* t = malloc(sizeof(Node));
  t->data = data;
  last(head)->next = t;
}

Node* last(Node* head)
{
  Node* last = head;
  while(last->next != NULL)
    last = last->next;
  return last;
}

int length(Node* head)
{
  int i = 0;
  Node* t = head;
  for(; t != NULL; i++)
    t = t->next;
  return i;
}
