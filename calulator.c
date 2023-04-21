#include <stdio.h>
void main(){
    int choice;
    int a,b,n;
    do{
    printf("1. Enter one for Addition\n2. Enter two for Substract\n3. Enter three for Multiply\n4. Enter four for Division\n");
    scanf("%d",&choice);
    printf("Enter first No: ");
    scanf("%d",&a);
    printf("Enter second No: ");
    scanf("%d",&b);
    switch(choice){
      case 1:
      printf("The addition of two No is: %d\n",a+b);
      break;
      case 2:
      printf("The substraction of two No is: %d\n",a-b);
      break;
      case 3:
      printf("The multiplication of two no is: %d\n",a*b);
      break;
      case 4:
      printf("The division of two no is: %d\n",a/b);
      break;
      default:
      printf("Wrong choice entered");
    }
    printf("1. Enter 1 to continue\n2.Enter 0 to exit\n");
    scanf("%d",&n);
    }while(n==1);
}