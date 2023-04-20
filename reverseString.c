#include <stdio.h>
void reverseString(char name[],int length){
     printf("\nThe reverse of a string is :");
     for(int i =(length-1);i>=0;i--){
    printf("%c",name[i]);
  }

}
void printString(char name[],int length){
printf("The original string is : ");
 for(int i=0;i<length;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char name[]="Yash-Gupta";
    int length=sizeof(name)/sizeof(name[0]);
    printString(name,length);
    reverseString(name,length);
}