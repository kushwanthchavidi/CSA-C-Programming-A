#include<stdio.h>
int main()
{
int a,b,t;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("after swapping values of a and b:%d %d",a,b);
}
