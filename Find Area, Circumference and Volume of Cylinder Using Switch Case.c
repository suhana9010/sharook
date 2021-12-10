#include <stdio.h>

int main(){
    int n;
    float radius,ht;
    const float pi=3.14;
    printf("1:area of cyclinder\n2:circumference\n3:volume of cyclinder\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("enter the value of radius: ");
            scanf("%f",&radius);
            printf("area of cyclinder=%f",pi*radius*radius);
        case 2:
            printf("enter the value of radius: ");
            scanf("%f",&radius);
            printf("circumference of cyclinder=%f",pi*radius*2);
        case 3:
            printf("enter the value of radius and ht: ");
            scanf("%f %f",&radius,&ht);
            printf("volume of cyclinder=%f",pi*radius*radius*ht);
    }
    return 0;
}
