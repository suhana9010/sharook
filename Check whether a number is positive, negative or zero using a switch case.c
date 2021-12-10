#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n>0){
        case 1:
            printf("%d is +ve",n);
            break;
        case 0:
            switch(n<0){
                case 1:
                    printf("%d is -ve",n);
                    break;
                case 0:
                    printf("%d is zero",n);
            }
    }
    return 0;
}
