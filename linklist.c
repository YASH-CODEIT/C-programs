#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
int main(){
  struct node *newnode,*head,*temp;
  int choice=1;
  head=0;
   while(choice){
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0){
    head=temp=newnode;
  }
  else{
    temp->next=newnode;
    temp=newnode;
  }
  printf("Enter 1 to continue.\nEnter 0 for exit.\n");
  scanf("%d",&choice);
   }
   temp=head;
   while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL");
  return 0;
}