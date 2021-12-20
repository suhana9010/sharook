#include <stdio.h>
#include <math.h>
int main(){ 
  int arr[10],n;
  printf("enter the decimal value: ");
  scanf("%d",&n);
  int i;
  for(i=0;n>0;i++){
    arr[i]=n%8;
    n=n/8;
  } 
  for(int j=i-1;j>=n;j--){
      printf("%d",arr[j]);
  }
  return 0;
}
