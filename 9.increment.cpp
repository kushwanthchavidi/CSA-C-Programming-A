#include<stdio.h>
int main()
{
	int n,s=0,digit;
	printf("enter the n:");
	scanf("%d",&n);
	while(n>0){
	digit=n%10;
	s=(s*10)+(digit+1);
	n=n/10;
}
n=s;
s=0;
while(n>0){
	digit=n%10;
	s=(s*10)+digit;
	n=n/10;
}
	printf("increment by 1 to all digits:%d",s);
	return 0;
}
