#include <stdio.h>
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        scanf("%d ",&num[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++){
      sum=num[i]+sum;
    }printf("%d ",sum);

    return 0;
}
