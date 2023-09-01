#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter limit value b:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
	}
}
