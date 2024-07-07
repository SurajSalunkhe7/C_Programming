#include<stdio.h>

int main()
{
	float r = 0.0;
	float Area = 0.0;
	float Circ = 0.0;
	
	printf("Enter A Redius : ");
	scanf("%f",r);
	
	Area = 3.14 * r * r;
	Circ = 2 * 3.14 *r;
	printf("Circumference Of Circle :%f\n",Circ);
	printf("Area Of Circle :%f\n",Area);
	
	return 0;
}