#include<stdlib.h>
#include<stdio.h>
#include"linkedList.h"

//memory allocation

Head*
makeList()
{
  //variables
  Head *hd;
  //ops
  hd = malloc(sizeof(Head));
  hd->size = 0;
  hd->front = NULL;
  //return
  return hd;
}

Node*
makeNode(int val)
{
  //variables
  Node *nd;
  //ops
  nd = malloc(sizeof(Node));
  nd->val = val;
  nd->next = NULL;
  //return
  return nd;
}

//list operations
void 
insertFront(int val, Head *list)
{
  //variables
  Node *nd, *ptr;
  //ops
  nd = makeNode(val);
  ptr = list->front;
  list->front = nd;
  list->front->next = ptr;
}
void 
insertEnd(int val, Head *list)
{
  //variables
  Node *nd, *ptr;
  //ops
  ptr = list->front;
  if(ptr == NULL) insertFront(val, list);
  else
  {
    nd = makeNode(val);
    while(ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = nd;
  }
}
/*
void insertMiddle(int val, int loc, Head *list)
{
  //variables
  int i;
  Node *nd, *ptr1, *ptr2;
  //ops
  i = 0;
  if(loc == 0) insertFront(val, list);
  nd = makeNode(val);
  ptr1 = list->front;
  if(ptr1 == NULL) return;
  else
  {
    i++;
*/     
