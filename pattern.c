#include <stdio.h>
int main(){
    int n=5;
    int k=n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=k){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        k--;
    }
}