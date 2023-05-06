#include <stdio.h>
void merge(int arr[],int start,int mid,int end){
    int len1=mid-start-1;
    int len2=end-mid;
    int temp[len1];
    int temp1[len2];
    int i=0;
    int j=0;
    int k=0;
    for(i=0;i<end;i++){
        if(temp[i]<temp1[i]){
          arr[i]=temp[i];
          k++;
        }
        else{
            arr[i]=temp1[i];
            k++;
        }
    }
}
void mergeSort(int arr[],int start,int end){
if(start>=end){
    return;
}
else{
    int mid=(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
}
int main(){
    int arr[]={4,7,1,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0,count1=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1])
            count++;
        else
               count1++;
    }
    if(count==n-1)
        printf("The array is sorted in ascending order");
    else if(count1==n-1)
        printf("The array is sorted in descending order");
    else
        printf("The array is unsorted");
        return 0;
}