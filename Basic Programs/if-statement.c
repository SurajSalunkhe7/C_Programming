#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	
	printf("Enter A First Number : ");
	scanf("%d",&iNo1);
	
	printf("Enter A Second Number :");
	scanf("%d",&iNo2);
	
	if(iNo1==iNo2)
	{
		printf("iNo1 Is Equal To iNo2\n");
	}
	
	return 0;
}