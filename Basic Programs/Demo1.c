#include<stdio.h>

int Check(int A)
{
	if((A%2)==0)
	{
		printf("Given Number Is Even Number");
	}
	else
	{
		printf("Given Number Is Odd Number");
	}
}
int main()
{
	int iNo1 = 0;
	int ANS = 0;
	
	printf("Enter Number :");
	scanf("%d",&iNo1);
	
	Check(iNo1);
	
	return 0;
}