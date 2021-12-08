Print Ascii Value of the Character?

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

The Greatest Number Among the Given Three Number?

int num1,num2,num3;
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
    printf("greater number = %d",num1);
else if(num2>num1 && num2>num3)
    printf("greater number = %d",num2);
else
    printf("greater number = %d",num3);
    
The Number Is Positive or Negative?

int n;
scanf("%d",&n);
 if(n==abs(n))
    printf("positive");
 else
    printf("negitive");
 
A Character Is an Alphabet or Not?

char ch;
scanf("%c",&ch);
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("alphabet");
else
    printf("not alphabet");

Check whether a year is a leap year or not?

#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if((year%400==0) ||(year%4==0 && year%100!=100))
    printf("%d is leap year",year);
    else printf("not a leap year");
    return 0;
}

The Date Is Correct or Not?

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

Reverse a number

int rev=0,n,rem;
printf("enter a number:");
scanf("%d",&n);
while(n!=0){
       rem=n%10;
       rev=rev*10+rem;
       n/=10;       
}
printf("rev no :%d",rev);

Armstrong number or Not?

#include <stdio.h>
#include <math.h>
int main(){  
   int count=0,rem,num,sum=0;
   scanf("%d",&num);
   int i=num,j=num;
   while(i!=0){
       i=i/10;
       
       count=count+1;
   }
   while(num!=0){
       rem=num%10;
       sum=sum+pow(rem,count);
       num=num/10;
   }
   if(sum==j)
       printf("Armstrong number");
   else printf("Not a Armstrong number");
    return 0;
}

Display Fibonacci Series

int n1=0,n2=1,n3,num;
scanf("%d",&num);
printf("%d %d",n1,n2);
for(int i=3;i<num;i++){
    n3=n1+n2;
    printf(" %d",n3);
    n1=n2;
    n2=n3;
}

LCM of two numbers

int a,b,max;
scanf("%d %d",&a,&b);
max=b>a? b:a;
while(1){
       if(max%a==0 && max%b==0){
       printf("%d",max);
       break;
       }
       max++;
}    
    OR
int a,b,max;
scanf("%d %d",&a,&b);
max=(b>a)?b:a;
if(max%a==0 && max%b==0){
    printf("%d",max);
 }
else if(max%a!=0 || max%b!=0){
    printf("%d",a*b);
}

Palindrome or Not?
    
int org,rev=0,rem,n;
scanf("%d",&org);
n=org;
while(org!=0){
       rem=org%10;
       rev=rev*10+rem;
       org=org/10;
}
if(n==rev)
   printf("palidrom");
else printf("Not palidrom");

Find A Generic Root Of Number?
    
int num,n,a,rem,count=0;
scanf("%d",&num);
n=num;
while(n!=0){
        rem=n%10;
        count=count+rem;
        n=n/10;
}
int final=0;
while(count!=0){
    rem=count%10;
    final=final+rem;
    count=count/10;
} printf("%d",final);

Number Is Divisible By 11 Using (VEDIC MATH)

int count=0,rem,num,n,even=0,odd=0;
scanf("%d",&num);
n=num;
while(n!=0){
       rem=n%10;
       count=count+rem;
       n=n/10;
}
for(int i=n;i>=1;i--){
        if(i%2==0){
           even=even+i%10;
        }
       else odd=odd+i%10;      
}
if(even==odd) printf("it is divisible by 11");
else printf("it is not");

Multiplication Table

int n;
scanf("%d",&n);
for(int i=0;i<=10;i++){
    printf("%d*%d=%d\n",n,i,n*i);
}

Find GCD of two Numbers Using

int a,b,GCD;
scanf("%d %d",&a,&b);
for(int i=1;i<=a && i<=b;i++){
     if(a%i==0 && b%i==0)
          GCD=i;
}

Print the following pyramid
*
* *
* * *
* * * *
* * * * *

int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
          printf("*");
      }
    printf("\n");
}

* * * * *
* * * *
* * * 
* *
*
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
          printf("*");
      }
      printf("\n");
}

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
      for(int k=1;k<=2*(n-i);k++){
        printf(" ");
      }
      for(int j=1;j<=2*i-1;j++){
          printf("*");
          printf(" ");
          
           
      }
      printf("\n");
}
