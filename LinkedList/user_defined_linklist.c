#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*head;
void createList(int n);
void traverseList();
int main()
{
  int n;
  printf(" Enter the total number of nodes :");
  scanf("%d", &n);
  createList(n);
  traverseList();
  return 0;
}
void createList(int n)
{
 struct Node *newNode,*temp;
 int data, i;
 head=(struct Node*)malloc(sizeof(struct Node));
 if(head==NULL)
 {
  printf("We cannot allocate any memory ");
 }
 printf("Enter the data for the node 1: ");
 scanf("%d",&data);
 head->data=data;
 head->next=NULL;
 temp=head;
 for(i=2;i<=n;i++)
 {
   newNode=(struct Node*)malloc(sizeof(struct Node));
 
 if(newNode==NULL)
 {
   printf("Unable to allocate the memory");
   break;
 }
 printf("enter the data of New Node : %d", i);
 scanf("%d",&data);
 newNode->data=data;
 newNode->next=NULL;
 temp->next=newNode;
 temp=temp->next;
}
}
void traverseList()
{
 struct Node *temp;
 if(head==NULL)
 {
   printf("list is empty");
   return;
 }
temp=head;
while(temp!=NULL)
 {
 printf("Data=%d\n", temp->data);
 temp = temp->next;
 }
}

