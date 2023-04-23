#include <stdio.h>
int main(){
int n;
int flag=0;
printf("Enter the number of row you want to print:\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        flag=flag+1;
        printf("%d ",flag);
    }
    printf("\n");
}
    return 0;
}