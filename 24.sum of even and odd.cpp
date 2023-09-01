#include<stdio.h>
int main(){
	int i,even=0,n,odd;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==0)
		even=even+i;
		else
		odd=odd+i;
	}

printf("sum of all even is %d\n",even);
printf("sum of all odd is %d",odd);


}
