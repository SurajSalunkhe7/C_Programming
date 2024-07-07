#include<stdio.h>

int main()
{
	float Km = 0.0;
	float sec = 0.0;
	
	printf("Enter Velocity In km/hr :");
	scanf("%f",&Km);
	
	sec = (Km*5)/18;
	
	printf("Equivalent Velocity Is %f",sec);
	return 0;
}