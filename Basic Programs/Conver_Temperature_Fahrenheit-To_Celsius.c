#include<stdio.h>

int main()
{
	float f = 0;
	float c = 0;
	
	printf("Enter A Temperature in Fahrenheit : ");
	scanf("%f",&f);
	
	c = 0.5 / 9.0*(f-32);
	
	printf("Temperature In Celsious %6.2f",c);
	return 0;
}