#include <stdio.h>
int main(){
    int arr[]={4,5,9,23,67,24};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe second largest element in the array is : %d\n",arr[1]);
    return 0;
} 