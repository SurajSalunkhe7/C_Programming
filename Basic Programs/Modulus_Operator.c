#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iAns = 0;
	
	printf("Enter A Number : ");
	scanf("%d",&iNo1);
	
	printf("Enter A Number Whos Modules :");
	scanf("%d",&iNo2);
	
	iAns = (iNo1)%iNo2;
	printf("Modules Is : %d",iAns);
	
	return 0;
}