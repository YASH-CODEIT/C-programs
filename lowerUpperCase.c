#include <stdio.h>
#include <string.h>
void lowToUp(char str[30]){
    int i=0;
 while(str[i]!='\0'){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
        i++;
    }
     puts(str);
}
void upToLow(char str[30]){
    int i=0;
 while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        i++;
    }
     puts(str);
}
int main(){
    char  str[30];
    int choice;
        int i=0;
    printf("Enter the String: ");
    scanf("%s",str);
    printf("1. Enter one to converted String LowerCase to UpperCase.\n2. Enter two to converted String UpperCase to LowerCase\n");
    scanf("%d",&choice);
    if(choice==1)
        lowToUp(str);
        else
        upToLow(str);
    return 0;
 }