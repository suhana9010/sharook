#include <stdio.h>

int main(){
    int num[5];
    for(int i=0;i<5;i++){
        scanf("%d ",&num[i]);
    } int x;
    scanf("\n%d",&x);
    int i;
    for(i=0;i<5;i++){
      if (i==x){
        break;
        
      }
    }
    while(i<=3){
      num[i]=num[i+1];
      i+=1;
    }
    num[4]=0;
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    return 0;
}
