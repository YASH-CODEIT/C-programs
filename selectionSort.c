#include <stdio.h>
 void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j+1]){
                int temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={4,3,2,9,1,11,45,89,23,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before the Sorting the array look like:\n");
     printArray(arr,n);
    selectionSort(arr,n);
    printf("\nAfter the Sorting the array lool like:\n");
    printArray(arr,n);
    return 0;
}