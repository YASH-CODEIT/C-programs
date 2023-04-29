#include <stdio.h>
int removeDuplicated(int arr[],int n){
   int temp[n];
    int i,j=0;
    for(i=0;i<=n-1;i++){
       if(arr[i]!=arr[i+1]){
        temp[j]=arr[i];
        j++;
       }
    }
    temp[j]=arr[j];
    for(i=0;i<j;i++){
        arr[i]=temp[i];
    }
    return j;
}
void printArray(int arr[],int n,int new_size){
    int i;
  for(i=0;i<new_size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,2,3,4,4,5,6,7,8,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int new_size=removeDuplicated(arr,n);
    printArray(arr,n,new_size);
}