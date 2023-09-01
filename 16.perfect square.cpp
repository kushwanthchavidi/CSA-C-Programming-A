#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter the positive integer:");
	scanf("%d",&n);
	if(n==0||n==1)
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n==i*i){
		printf("%d is a perfect square:",n);
		flag=1;
		break;}
	}
if(flag==0)
printf("%d is not perfect square",n);
return 0;
}
