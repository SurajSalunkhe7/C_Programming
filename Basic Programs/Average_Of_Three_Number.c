#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iNo3 = 0;
	float Avg = 0.0;
	
	printf("Enter First Number :\n");
	scanf("%d",&iNo1);
	
	printf("Enter Second Number :\n");
	scanf("%d",&iNo2);
	
	printf("Enter Thered Number :\n");
	scanf("%d",&iNo3);
	
	Avg = (iNo1 + iNo2 + iNo3)/3;
	
	printf("Avgerage Is : %f",Avg);
	return 0;
}