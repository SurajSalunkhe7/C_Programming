#include<stdio.h>

int main()
{
	int iNo1 = 2;
	int iNo2 = 2;
	int iNo3 = 0;
	int iNo4 = 0;
	
	iNo3 = --iNo1;
	iNo4 = iNo2--;
	
	printf("\niNo1 = %d\n iNo2 = %d\n iNo3 = %d\n iNo4 = %d\n",iNo1,iNo2,iNo3,iNo4);
	return 0;
	
}