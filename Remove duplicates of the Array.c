#include <stdio.h>

int main(){                                                              
    int n;
    scanf("%d\n",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(num[i]==num[j]){
                for(int k=j;k<n-1;k++){
                    num[k]=num[k+1];
                }
                n=n-1;
                j=j-1;
            }
        
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    return 0;
}
