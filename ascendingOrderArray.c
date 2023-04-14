#include<stdio.h>
int main(){
    int arr[]={5,3,6,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
}
