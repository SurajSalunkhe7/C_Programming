#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	
	printf("Enter First Number : ");
	scanf("%d",&iNo1);
	
	printf("Enter Second Number :");
	scanf("%d",&iNo2);
	
	printf("Number Before Swapping :%d %d\n",iNo1,iNo2);
	
	iNo2 = iNo1 + iNo2;
	iNo1 = iNo2 - iNo1;
	iNo2 = iNo2 - iNo1;
	
	printf("Number After Swapping :%d %d\n",iNo1,iNo2);
	return 0;
}