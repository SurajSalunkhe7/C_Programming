#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	float iAns = 0;
	
	printf("Enter A Number : ");
	scanf("%d",&iNo1);
	
	printf("Enter A Number Who Divid :");
	scanf("%d",&iNo2);
	
	iAns = (iNo1)/iNo2;
	
	printf("Division Is : %f",iAns);
	return 0;
	
}