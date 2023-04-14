#include<stdio.h>
void fifonaciSeries(int n,int a,int b,int index){
  if(index==n){
    return;
  }
  int c=a+b;
  printf("%d ",c);
  index++;
  fifonaciSeries(n,b,c,index);
}
int main(){
  int n;
  printf("ENter the no upto you wan to print fifonaci series: ");
  scanf("%d",&n);
  printf("0 ");
  fifonaciSeries(n,0,1,1);
}