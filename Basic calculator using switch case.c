#include <stdio.h>
int main(){
  char operator;
  printf("enter a operators (+,-,/,*)");
  scanf("%c",&operator);
  double n1,n2;
  printf("enter two no.");
  scanf("%lf %lf",&n1,&n2);
  switch(operator){
    case '+':
        printf("%.1lf+%.1lf=%.1lf",n1,n2,n1+n2);
        break;
    case '-':
        printf("%.1lf-%.1lf=%.1lf",n1,n2,n1-n2);
        break;
    case '*':
        printf("%.1lf*%.1lf=%.1lf",n1,n2,n1*n2);
        break;
    case '/':
        printf("%.1lf/%.1lf=%.1lf",n1,n2,n1/n2);
        break; 
     
    default: printf("is not a operator");
  }

    return 0;
}
