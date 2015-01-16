//this is the linked list project
#define DEBUG 1
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

typedef struct dnode
{
  int val;
  struct node *prev, *next;
}Dnode;

typedef struct dhead
{
  int size;
  struct node *list;
}Dhead;

//functions from lFunctions.c
Head *makeList();
Node *makeNode(int val);
void insertFront(int val, Head *list);
void insertEnd(int val, Head *list);
void insertMiddle(int val, int loc, Head *list);
void printTable(Head *list);
void interface(Head *list);

//functions from dFunctions.c
