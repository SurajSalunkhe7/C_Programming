#include<stdio.h>

void main()
{
  int number;
  printf("Type a number:");
  scanf("%d", &number);

  if (number < 0) { // check whether the number is negative number.
    number = -number; // If it is a negative then convert it into positive.

  }
   printf("The absolute value is %d\n", number);
   if(number>0)
   {
       number = number;
       printf("The absolute value is %d\n", number);

   }
}
