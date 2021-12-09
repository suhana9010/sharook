#include <stdio.h>
int main(){
    int n;
    printf("enter ur score:");
    scanf("%d",&n);
    if(n<=0 || n>=100){
        printf("Invalid score");
    }
    switch(n/10){
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("B");
            break;
        case 6:
            printf("C");
            break;
        case 5:
            printf("D");
            break;
        case 4:
            printf("E");
            break;
    }
    return 0;
}
