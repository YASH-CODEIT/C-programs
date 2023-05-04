#include <stdio.h>
#define N 5
int top=-1;
int arr[N];
void push(){
    int data;
    printf("Enter the data:\n");
    scanf("%d",&data);
    if(top==N-1){
        printf("Overflow condition Occur.No more element is inserted\n");
        return;
    }
    else{
        top++;
        arr[top]=data; 
    }
}
void pop(){
    if(top==-1){
        printf("Underflow condition occur.\n");
    }
    else{
        printf("The data that ia pop is:%d\n",arr[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("The stack is empty no element is present.\n");
        return;
    }
    else{
    printf("The topmost element of stack is:%d\n",arr[top]);
    }
}
void display(){
    if(top==-1){
        printf("The stack is empty no element is present.\n");
        return;
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
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
    return 0;
}