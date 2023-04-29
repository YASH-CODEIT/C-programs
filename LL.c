#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
int main(){
  int count=0;
//----------------------------------------------------------------------------
//Creating a linkiedLIst
  struct node *newnode,*head,*temp,*currnode,*prevnode;
  printf("Insertion\n1.Enter 1 to Insert an element in Linked List.\n2.Press 2 to Insert an element at the begging index of Linked List\n3.Enter 3 to Insert an element at Last index of Linked List\n4.Enter 4 to insert element at any specific position of index in Linked List.\n-------------------------------------------------------------------------\nDeletion\n5.Enter 5 to delete element from begging index of Linked List.\n6.Enter 6 to delete from ending index of Linked List.\n7.Enter 7 to delete from a particular index of LinkedList\n------------------------------------------------------------------------\nprint\n8.Enter 8 to print the element of Linked List\n----------------------------------------\n");
  int choice=0;
  int choice2=9;
  head=0;
  while(choice2==9){
    printf("Enter Choice:");
    scanf("%d",&choice);
    switch(choice){
      case 1:
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
    break;
    case 2:
     newnode=(struct node *)malloc(sizeof(struct node));
   printf("Enter the data:\n");
   scanf("%d",&newnode->data);
      count++;
   newnode->next=0;
   if(head==0){
    head=newnode;
   }
   else{
    newnode->next=head;
    head=newnode;
   }
   break;
   case 3:
  
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->next=0;
   printf("Enter the data:\n");
   scanf("%d",&newnode->data);
      count++;
    if(head==0){
      head=newnode;
    }
    else{
    temp=head;
   while(temp->next!=0){
     temp=temp->next;
   }
   temp->next=newnode;
    }
   break;
   case 4:
   int pos;
   printf("Enter a specific position you want to insert an element");
   scanf("%d",&pos);
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->next=0;
   printf("Enter the data:\n");
   scanf("%d",&newnode->data);
   if(head==0){
    head=newnode;
   }
   else{
   temp=head;
   struct node *currnode;
   struct node *prevnode;
   prevnode=temp;
   currnode=temp->next;
   count++;
   for(int i=pos-2;i>0;i--){
    currnode=currnode->next;
    prevnode=prevnode->next;
   }
   prevnode->next=newnode;
   newnode->next=currnode;
   }
   break;
   case 5:
      if(head==0){
    printf("The linked list is empty.");
   }
   else{
    count--;
    head=head->next;
   }
   break;
   case 6:
if(head==0){
    printf("The list is empty no element is exit.");
   }
  prevnode=head;
  currnode=head->next;
   count--;
   while(currnode->next!=0){
    currnode=currnode->next;
    prevnode=prevnode->next;
   }
   prevnode->next=0;
   break;
   case 7:
if(head==0){
    printf("The list is empty no element exists.");
   }
   else{
    struct node *prevnode=head;
    struct node *currnode=head->next;
    printf("Enter the position from which you want to deleted an element:\n");
    scanf("%d",&pos);
    count--;
    for(int i=pos-2;i>0;i--){
      currnode=currnode->next;
      prevnode=prevnode->next;
    }
    prevnode->next=currnode->next;
   }
   break;
   case 8:
   if(head==0){
    printf("The Linked List is empty no element found.\n");
   }
   else{
   temp=head;
 while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   }
   break;
   break;
 default:
 printf("Wrong Option Chosse\n");
    }
    printf("1.Enter 9 for Continue.\n2.Enter 10 for Exit.\n");
scanf("%d",&choice2);
}
return 0;
}