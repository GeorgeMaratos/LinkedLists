#include<stdlib.h>
#include<stdio.h>
#include"linkedList.h"

void
main()
{
  //variables
  Head *list;
  //ops
  printf("Linked List Debugger\n");
  list = malloc(sizeof(Head));
  interface(list); 
}
