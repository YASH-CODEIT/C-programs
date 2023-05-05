#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*top;
void push(){
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data:\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
    head=top=newnode;
    return;
}
else{
top->next=newnode;
top=newnode;
}
}
void pop(){
    if(head==0){
        printf("Underflow condition occcur.No element exist.\n");
    }
struct node *prevnode;
struct node *currnode;
prevnode=head;
currnode=head->next;
while(currnode->next!=0){
    currnode=currnode->next;
    prevnode=prevnode->next;
}
prevnode->next=0;

}
void peek(){
    if(head==0){
        printf("Underflow condition occur.no element is exit.\n");
        return;
    }
    top=head;
    while(top->next!=0){
        top=top->next;
    }
    printf("The topmost element of the stack is: %d\n",top->data);
}
void display(){
    if(head==0){
        printf("Underflow condition occur.mo element exit in stack\n");
        return;
    }
    top=head;
    while(top->next!=0){
        printf("%d ",top->data);
        top=top->next;
    }
    printf("%d ",top->data);
    printf("\n");
}
int main(){
 int choice,choice1=1;
    while(choice1==1){
         printf("Enter Choice:\n1.Enter 1 to insert an element in stack\n2.Enter 2 delete an element from Stack\n3.Enter 3 to print the topmost element of stack\n4 Enter 4 to display the element of Stack.\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        default:
        printf("Wrong choice enter.\n");
        }
        printf("1.Enter 1 to Continue.\n2.Enter any number to discontinue.\n");
        scanf("%d",&choice1);
    }
}