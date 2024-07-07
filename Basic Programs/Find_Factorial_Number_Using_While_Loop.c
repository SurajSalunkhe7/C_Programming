#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int Fact = 0;
	
	printf("Enter A Number :");
	scanf("%d\n",&iNo1);
	
	Fact = 1;
	iNo2 =1;
	while(iNo2<=iNo1)
	{
		Fact = Fact * iNo2;
		iNo2 = iNo2 +1;
	}
	printf("Factoreal Is : %d",Fact);
	return 0;
}


