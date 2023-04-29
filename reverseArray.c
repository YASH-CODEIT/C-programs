#include <stdio.h>
#include <stdlib.h>
void revArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
}
void printArray(int arr[],int n){
      for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
  printf("Before reverse the array Look like:\n");
  printArray(arr,n);
  printf("\nAfter reverse the array is Look like:\n");
  revArray(arr,n);
  printArray(arr,n);
    return 0;
}