#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
int main(){
  int count=0;
  struct node *newnode,*head,*temp;
  int choice=1;
  head=0;
   while(choice){
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d",&newnode->data);
  count++;
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
   //print LinkedList
   temp=head;
   while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   //Sorting LinkedList
   struct node *i,*j;
   for(i=head;i->next!=0;i=i->next){
    for(j=i->next;j!=0;j=j->next){
      if(i->data > j->data){
        int store=i->data;
        i->data=j->data;
        j->data=store;
      }
    }
   }
   //print LinkedList
   printf("After Sorting the List Look like:\n");
      temp=head;
 while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   free(temp);
}