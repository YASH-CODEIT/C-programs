
#include<stdio.h>
#include <math.h>
int main(){
    int arr[4];
    int result=0;
    int j=0;
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=3;i>=0;i--){
        result= result+((int)(pow(2,i))*arr[j]);
        j++;
    }
    printf("%d",result);
    return 0;
}