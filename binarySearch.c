#include <stdio.h>
void binarySearch(int arr[],int l,int r,int find){
    int mid=(l+r)/2;
    if(l>r){
        printf("The element is not present.\n");
        return;
    }
    if(arr[mid]==find){
        printf("The element is present  at position: %d\n",mid+1);
        return;
    }
    if(find>arr[mid]){
        binarySearch(arr,mid+1,r,find);
    }
    else{
        binarySearch(arr,l,mid-1,find);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int  main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int find,index;
    printArray(arr,n);
    printf("Enter the element that you want to search:\n");
    scanf("%d",&find);
    binarySearch(arr,0,n-1,find);
}