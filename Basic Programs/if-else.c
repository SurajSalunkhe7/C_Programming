#include<stdio.h>

int main()
{
	int iNo1 = 0;
	
	printf("Enter A Number\n");
	scanf("%d",&iNo1);
	
	if((iNo1%2)==0)
	{
		printf("Given Number is Even\n");
	}
	else
	{
		printf("Given Number Is Odd Number\n");
	}
}