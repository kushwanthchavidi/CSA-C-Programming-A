#include<stdio.h>
int main()
{
int sum=0,num,digit;
printf("enter the number:");
scanf("%d",&num);
while(num>0){
digit=num%10;
sum+=(digit*digit*digit);
num/=10;
}
if(sum==num){
printf("  it is armstrong");}
else{
printf(" it is not armstrong");}
}
