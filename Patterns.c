#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j); 
        }
        printf("\n");
        
    }
    return 0;
}

A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 

#include <stdio.h>
int main() {
   int n;
   char ch='A';
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%c ",ch);
       }
       ch+=1;
       printf("\n");
       
   }
   
   return 0;
}

A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F 
#include <stdio.h>
int main() {
   int n;
   char ch='A';
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%c ",ch);
           ch+=1;
       }
       ch-=i;
       printf("\n");
       
   }
   
   return 0;
}
