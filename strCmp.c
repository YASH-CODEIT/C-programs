#include <stdio.h>
#include <string.h>
int strCmp(char str1[20],char str2[20]){
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    int i=0;
    while(str1[i]!='\0'){
        if(str1[i]!=str2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    char str1[20];
    char str2[20];
    int n;
    printf("Enter First String: ");
    scanf("%s",str1);
    printf("Enter Second String: ");
    scanf("%s",str2);
    n=strCmp(str1,str2);
    if(n==0)
        printf("str1 is not equal to str2\n");
    else
    printf("str1 is equal to str2\n");
    return 0;
}