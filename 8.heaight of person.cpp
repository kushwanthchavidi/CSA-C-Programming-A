#include<stdio.h>
int main()
{
	float height;
	printf("enter the height(in centimeters)\n");
	scanf("%f",&height);
	if(height<150.0)
	{
		printf("drawf\n");
	}
	else if ((height>150.0)&&(height<165.00))
	printf("average height\n");
	else if ((height>165.0)&&(height<195.0))
	printf("taller\n");
	else
	printf("abnormal height");

}
