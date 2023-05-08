#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("Enter the size of an array1:\n");
    scanf("%d",&n);
    int *ptr1,*ptr2;
    //dynamically allocate memory using malloc function
    ptr1=(int *)malloc(n*sizeof(ptr1));
    printf("Enter the element of an array1:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr1[i]);
    }
    printf("The element of an array1 is:\n");
    for(i=0;i<n;i++){
        printf("%d ",ptr1[i]);
    }
    printf("\n");
    //dynamically allocated memory using caalloc function
    printf("Enter the size of an array2:\n");
    scanf("%d",&n);
   ptr2=(int *)calloc(n,sizeof(ptr2));
    printf("Enter the element of array2:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ptr2[i]);
    }
    printf("The element of an array2 is:\n");
    for(i=0;i<n;i++){
        printf("%d ",ptr2[i]);
    }
    printf("\n");
   //dynamically allocate memory using realloc function
   //resize array2 using dealloc function
   printf("Enter the new size of array2:\n");
   scanf("%d",&n);
   ptr2=(int *)realloc(ptr2,n*sizeof(int));
   printf("Enter the new element of array2:\n");
   for(i=0;i<n;i++){
     scanf("%d",&ptr2[i]);
   }
   printf("The new element of array2 is:\n");
   for(i=0;i<n;i++){
    printf("%d ",ptr2[i]);
   }
   free(ptr1);
   free(ptr2);
    return 0;
}