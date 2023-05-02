#include <stdio.h>
 void linearSearch(int arr[],int n,int find){
 for(int i=0;i<n;i++){
        if(arr[i]==find){
            printf("The element is present at position: %d\n",i+1);
            break;
        }
        if(i==n-1){
            printf("The element is not present in the array.\n");
        }
    }
}
void printArr(int arr[],int n){
 for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     printf("\n");
}
int main(){
    int arr[]={3,6,1,8,9,10};
    int find;
    int n=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    printf("Enter the element that you want to searched in an array:");
    scanf("%d",&find);
    linearSearch(arr,n,find);
    return 0;
}