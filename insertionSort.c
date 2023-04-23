#include <stdio.h>
void insertionSort(int arr[],int n){
  for(int i=1;i<=n-1;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int n){
 for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={4,3,2,9,1,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before the Sorting the array is look like:\n");
      printArray(arr,n);
    insertionSort(arr,n);
        printf("\nAfter the Sorting the array is look like:\n");
    printArray(arr,n);
return 0;
}