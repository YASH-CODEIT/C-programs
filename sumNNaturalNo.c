#include<stdio.h>
int sumNNaturalNo(int n,int sum){
    if(n==0){
        return sum;
    }
    sum=sum+n;
    sumNNaturalNo(n-1,sum);
}
int main(){
    int n;
    printf("Enter the no to print its sum of first n natural no: ");
    scanf("%d",&n);
    int result=sumNNaturalNo(n,0);
    printf("%d",result);
}