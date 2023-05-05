#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
     int data;
     printf("Enter the data:\n");
     scanf("%d",&data);
if(rear==N-1){
    printf("Overeflow.No more element insert.\n");
    return;
}
 else if(front==-1 && rear==-1){
    front=0;
    rear=0;
    queue[rear]=data;
}
else{
    rear++;
    queue[rear]=data;
}
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("Underflow.No element is present.\n");
        return;
    }
    else if(front==rear){
        printf("The element that is enqueue is:%d\n",queue[front]);
        front=-1;;
        rear=-1;
    }
    else{
        printf("The element that is enqueue is:%d\n",queue[front]);
        front++;
    }
}
 void display(){
    if(front==-1 && rear==-1){
        printf("No element present inside queue.\n");
        return;
    }
    else{
        int count=front;
        while(count!=rear){
            printf("%d ",queue[count]);
            count++;
        }
        printf("%d ",queue[count]);
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
}