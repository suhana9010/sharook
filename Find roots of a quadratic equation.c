#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d;
    float r1,r2,realpt,imagpt;
    printf("give a,b,c:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("roots are differnt\n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("Roots are %f %f",r1,r2);     
    }
    else if(d==0){
        printf("roots are equal\n");
        r1=r2=-b/(2*a);
        printf("Roots are %f %f",r1,r2);
    }
    else{
        printf("roots are imaginary\n");
        realpt=-b/(2*a);
        imagpt=sqrt(-d)/(2*a);
        printf("Roots are %f+i%f %f-i%f",realpt,imagpt,realpt,imagpt);
        
    }
    return 0;
}
