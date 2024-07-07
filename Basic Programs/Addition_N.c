/*
	Steps
		step 1: Understand The Problem Stetement
		Step 2: Write the algorithm
*/
//Accespt N Number For User And Perform Addition

//Input
//Value Of N = 5
//Values : 10 20 30 40 50

//Output
//Addition Is : 150

//Algorithm
/*
	START
		Accespt The number of elements from user
		Allocatee the memmory to store thet number
		Accespt the number from userperform addition of all number
		Display the addition
	END	
*/
 
#include<stdio.h>		//For Printf And Scanf
#include<stdlib>		//For malloc And free

////////////////////////////////////////////
//
//Application Name : Addition Of N Number
//Input : N Number
//Output : Addition
//Author : Suraj Hanmant Salunkhe
//Date : 11 Desember 2022
//
//////////////////////////////////////////////

int main()
{
	int *Arr = NULL;	//Pointer to hold address of aray
	int iSize = 0;		//Variable To Hold Size Of Array
	int i = 0;
	printf("Please Eneter How Many Elememt Yoy Want:\n");
	scanf("%d",&iSize);
	
	//Allocate The Memmory
	Arr = (int *)malloc(iSize * sizeof(int));
	
	printf("Please Enter The Elememt\n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d\n",&Arr[i]);
	}
	
	for(i = 0; i< iSize; i++)
	{
		iSu	
	}
	
	return 0;
}