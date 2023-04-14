#include<stdio.h>
int sum(int n1,int n2){
    return (n1+n2);
}
int main(){
    int n1,n2;
    printf("Enter the value of first number:");
    scanf("%d",&n1);
    printf("Enter the value of second number:");
    scanf("%d",&n2);
    int result=sum(n1,n2);
    printf("The sum of two no is equal to:%d",result);
    return 0;
}