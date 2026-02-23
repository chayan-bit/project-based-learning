#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  char* data;
  struct Node* prev;
  struct Node* next;
}Node;

typedef struct {
  Node* head;
  Node* tail;
}Doublylinkedlist;

void intialize(Doublylinkedlist* list){
  list->head = NULL;
  list->tail = NULL;
}

void insert(Doublylinkedlist* list , const char* str ){
  Node* new = (Node*)malloc(sizeof(Node));
  new->data = (char*)malloc(strlen(str)+1);
  strcpy = (new->data,str);
  new->next = NULL;
  new->prev = list->tail;

  
}
