#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==NULL && rear==NULL){
    front=newnode;
    rear=newnode;
    return;
    } 
    else{
    rear->next=newnode;
    rear=newnode;
    }
}
void dequeue(){
    if(front==0 && rear==0){
        printf("Underflow conditon.Queue is empty.\n");
    }
    else if(front==rear){
        printf("The element that is pop is:%d.\n",front->data);
        front=0;
        rear=0;
    }
    else{
        printf("The element that is pop is:%d\n",front->data);
        front=front->next;
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("The queue is empty.No element present.\n");
    }
    else{
        temp=front;
        while(temp->next!=0){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
        printf("\n");

    }
}
int main(){
    int choice,choice1=1;
    while(choice1==1){
         printf("Enter Choice:\n1.Enter 1 to insert an element in queue\n2.Enter 2 delete an element from queu\n3. Enter 3 to display the element of queue.\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        default:
        printf("Wrong choice enter.\n");
        }
        printf("1.Enter 1 to Continue.\n2.Enter any number to discontinue.\n");
        scanf("%d",&choice1);
    }
 return 0;
}