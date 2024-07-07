#include<stdio.h>
int main()
{
	int iNo1 = 1;
	int iNo2 = 0;
	
	printf("Enter A Number :");
	scanf("%d",&iNo2);
	
	for(iNo1 = 1; iNo1 <= 10; iNo1++)
	{
		printf("%d\n",(iNo2*iNo1));
	}
}