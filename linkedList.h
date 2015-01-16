//this is the linked list project
typedef struct node
{
  int val;
  struct node *next;
}Node;

typedef struct head
{
  int size;
  struct node *front;
}Head;
