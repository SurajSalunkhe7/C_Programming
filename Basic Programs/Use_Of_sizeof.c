#include<stdio.h>

int main()
{
	int iNo = 11;
	float fNo = 2.3;
	double dNo = 3.14;
	char ch = 'A';
	
	printf("Size Of Interger : %d\n",sizeof(iNo));
	printf("Size Of Float : %d\n",sizeof(fNo));
	printf("Size Of Double : %d\n",sizeof(dNo));
	printf("Size Of Characher : %d\n",sizeof(ch));
	
	return 0;
}