include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
