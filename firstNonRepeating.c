#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int count=0;
  printf("Enter the String:");
  scanf("%s",str);
  for(int i=0;i<strlen(str);i++){
    count=0;
    for(int j=0;j<strlen(str);j++){
      if(str[i]==str[j]){
        count++;
      }
    }
    if(count==1){
      printf("The first non repeating charachter is : %c\n",str[i]);
      return 0;
    }
  }
  printf("There is not a non-repeating charachter.\n");
  return 0;
}