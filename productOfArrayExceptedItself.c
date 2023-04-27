#include <stdio.h>
void productOfArray(int arr[],int n){
 int temp[n];
 int i,j;
    for(i=0;i<n;i++){
        int multiply=1;
        for(j=0;j<n;j++){
            if(i==j){    
                continue;
            }
            else{
               multiply=multiply*arr[j];
            }
        }
        temp[i]=multiply;
    }
    for(i=0;i<n;i++){
        arr[i]=temp[i];
    }
    return;
}
void printArray(int arr[],int n){
    printf("[");
for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("]");
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
   productOfArray(arr,n);
    printArray(arr,n);
}