#include<stdio.h>

int main()
{
	int Year = 0;
	printf("Enter A Year :");
	scanf("%d",&Year);
	
	if((Year % 4 == 0)&&(Year % 100!= 0)||(Year % 400 ==0))
	{
		printf("%d Is A Leap Year\n",Year);
	}
	else
	{
		printf("%d Is Not Leap Year\n",Year);
	}
	return 0;
}