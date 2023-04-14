#include<stdio.h>
int printFact(int n,int fact){
    if(n==1){
        return fact;
    }
 fact=fact*n;
 printFact(n-1,fact);
}
int main(){
    int n;
    printf("Enter the no to finds its Factorial:");
    scanf("%d",&n);
    int result=printFact(n,1);
    printf("%d",result);
    return 0;
}