#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
};
int main(){
  int count=0;
//Creating a linkiedLIst
  struct node *newnode,*head,*temp,*prevnode,*currnode;
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
   for(int i=0;i<count-1;i++){
prevnode=head;
currnode=head->next;
  for(int j=0;j<count-i-1;j++){
    if(prevnode->data>currnode->data){
      int store=currnode->data;
      currnode->data=prevnode->data;
      prevnode->data=store;
    }
  currnode=currnode->next;
  prevnode=prevnode->next;
  }
}
//print LinkedList
printf("After the sorting the LinkedList is Look Like:\n");
temp=head;
 while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   free(temp);
  return 0;
}