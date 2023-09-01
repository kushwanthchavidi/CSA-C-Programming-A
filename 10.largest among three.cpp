#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
	printf("a is larger:%d",a);
}
else if(b>c)
printf("b is larger:%d",b);
else
printf("c is larger:%d",c);
}
