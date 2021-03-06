#include<stdlib.h>
#include<stdio.h>
#include"linkedList.h"

//Singly linked lists
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
  list->size++;
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
    list->size++;
  }
}

void insertMiddle(int val, int loc, Head *list)
{
  //variables
  int i;
  Node *nd, *ptr1, *ptr2;
  //ops
  if(loc == 0) insertFront(val, list);
  if(loc == list->size) insertEnd(val, list);
  else if(loc > list->size) return;
  nd = makeNode(val);
  ptr1 = list->front;
  ptr2 = list->front->next;
  i = 1;
  while(ptr2 != NULL)
  {
    if(i == loc)
    {
      ptr1->next = nd;
      nd->next = ptr2;
      list->size++;
      return;
    }
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
    i++;
  }
}
//debugging
void
printTable(Head *list)
{
  //variables
  Node *ptr;
  //ops
  printf("Printing Table\n");
  printf("Table size: %d\n", list->size);
  ptr = list->front;
  while(ptr != NULL)
  {
    printf("[%d] -> ", ptr->val);
    ptr = ptr->next;
  }
}

void
interface(Head *list)
{
  //variables
  int input;
  //ops
  for(;;)
  {
    printf("Enter Value: ");
    scanf("%d", &input);
    switch(input)
    {
      case 0: return;
      case 1:
	insertFront(5, list);
	break;
      case 2:
	insertEnd(9, list);
	break;
      case 3:
        insertMiddle(94, 3, list);
    }
  }
}     
