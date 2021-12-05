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
 
/*A Character Is an Alphabet or Not*/

char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("alphabet");
else
    printf("not alphabet");

Check whether a year is a leap year or not.

#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if((year%400==0) ||(year%4==0 && year%100!=100))
    printf("%d is leap year",year);
    else printf("not a leap year");
    return 0;
}

The Date Is Correct or Not

#include <stdio.h>
int main(){
  int d,m,y;
  scanf("%d %d %d\n",&d,&m,&y);
  if(1800<=y && y<=9999){
     if(1<=m && m<=12){
         if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(1<=d && d<=31){
             printf("VALID");
            }
            else printf("NOT VALID");  
         }
         if(m==4||m==6||m==9||m==11){
             if(1<=d && d<=30){
                 printf("VALID");
             }
             else printf("NOT VALID");   
         }
         if(m==2){
             if((y%400==0)||(y%4==0&&y%100!=0)){
                 if(1<=d && d<=29){
                     printf("VALID");
                 }
                 else printf("NOT VALID");
             }
             else{
                 if(1<=d && d<=28){
                     printf("VALID");
                 }
                 else printf("NOT VALID");
             }  
         }
     }
     else printf("NOT VALID");    
  }
  else printf("NOT VALID");
  return 0;
}

