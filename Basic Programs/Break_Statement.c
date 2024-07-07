#include<stdio.h>./

int main()
{
	int A = 1;
	
	switch(A)
	{
		case 1:
			printf("One\n");
			break;
		
		case 2:
			printf("Two");
			break;
		
		default:
			printf("Defult");
	}
	
	printf("This Statement Is Next To Switch\n");
	return 0;
}
|