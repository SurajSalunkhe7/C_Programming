#include<stdio.h>
#include<stdbool.h>
int Add(int iValue1, int iValue2)
{
	int iret = 0;
	iret = iValue1 + iValue2;
	
	printf("Addition IS : %d\n",iret);
	if(iret % 5 ==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNo1 = 10;
	int iNo2 = 11;
	int iAns = 0;
	
	printf("Enter First Number : \n");
	scanf("%d",&iNo1);
	
	printf("Enter Second Number : \n");
	scanf("%d",&iNo2);
	
	iAns = Add(iNo1 , iNo2);
	
	if(iAns == true)
	{
		printf("Number Is Good \n");
	}
	else
	{
		printf("Number Is Not Good \n");
	}
	
	return 0;
}