#include <stdio.h>

int main(){
    float a,b;
    int n;
    printf("0: celsius\n1: Fahrenheit\n");
    scanf("%d",&n);
    switch(n){
        case 0:
           printf("enter celsius no:\n");
           scanf("%f",&a);
           printf("%f",((9*a)/5)+32);
           break;
        case 1:
           printf("enter f no:\n");
           scanf("%f",&b);
           printf("%f",5*(b-32)/9);
           break;
    }
    return 0;
}
