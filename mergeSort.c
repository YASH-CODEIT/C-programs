#include <stdio.h>
void merge(int arr[],int low,int mid,int upp){
    int i,j,k;
    int len1=mid-low+1;
    int len2=upp-mid;
    int left[len1];
    int right[len2];
    for(i=0;i<len1;i++){
        left[i]=arr[i+low];
    }
    for(j=0;j<len2;j++){
        right[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=low;
    while(i<len1 && j<len2){
    if(left[i]<=right[j]){
    arr[k]=left[i];
    i++;
    }
    else{
        arr[k]=right[j];
        j++;
    }
    k++;
    }
    while(i<len1){
        arr[k]=left[i];
        i++;
        k++;
    }
       while(j<len2){
        arr[k]=right[j];
        j++;
        k++;
    }
}
 void mergeSort(int arr[],int low,int upp){
    if(low<upp){
        int mid=(low+upp)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,upp);
        merge(arr,low,mid,upp);
    }
}
void printArray(int arr[],int n){
 for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={3,7,1,3,9,12,56,90,50};
    int n=sizeof(arr)/sizeof(arr[0]);
   printf("Before the Sorting the Array is look like :\n"); 
    printArray(arr,n);
    printf("\nAfter the Sorting the Array is look like :\n"); 
    mergeSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}