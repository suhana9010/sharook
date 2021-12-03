Print Ascii Value of the Character

#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("ascii code= %d",c);
    return 0;
} 
A-Z Ascii codes 65-91
a-z Ascii codes 97-122

The Greatest Number Among the Given Three Number

int num1,num2,num3;
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
    printf("greater number = %d",num1);
else if(num2>num1 && num2>num3)
    printf("greater number = %d",num2);
else
    printf("greater number = %d",num3);
    
The Number Is Positive or Negative

int n;
scanf("%d",&n);
 if(n==abs(n))
    printf("positive");
 else
    printf("negitive");
 
A Character Is an Alphabet or Not

char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("alphabet");
else
    printf("not alphabet");
   
