#include<stdio.h>
#include<stdbool.h>
void checkEvenOdd(int n){
    if(n%2==0){
        printf("EVEN");
        return;
    }
       printf("ODD");
}
int main(){
    int n;
    printf("Enter the no to check whether it is even or odd:");
    scanf("%d",&n);
    checkEvenOdd(n);
}