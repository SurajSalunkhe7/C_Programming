#include<stdio.h>

void Display()
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= 20)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}

int main()
{
	Display();
	
	return 0;
}