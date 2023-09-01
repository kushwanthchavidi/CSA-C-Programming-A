#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter the positivi integer:");
	scanf("%d",&n);
	if(n==0||n==1)
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
if(flag==0)
printf("%d is a primenumber",n);
else
printf("%d is not a primenumber",n);
return 0;
}
