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

//functions from lFunctions.c
Head *makeList();
Node *makeNode(int val);
void insertFront(int val, Head *list);
void insertEnd(int val, Head *list);
//void insertMiddle(int val, int loc, Head *list);
void printTable(Head *list);
void interface(Head *list);
