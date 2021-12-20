#include <stdio.h>
#include <math.h>

int main(){ 
  int n,rem;
  printf("enter the binary value: ");
  scanf("%d",&n);
  int dec=0;
  for(int i=0;n!=0;i++){
      rem=n%10;
      dec=dec+rem*pow(2,i);
      n=n/10;
  }
  printf("%d",dec);
  
    return 0;
}
