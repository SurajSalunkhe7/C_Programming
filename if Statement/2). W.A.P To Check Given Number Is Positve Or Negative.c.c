#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a Number\n");         /// Input a Number For User
    scanf("%d",&a);

    if(a > 0)
    {
        printf("Given Number Is Positive\n");      ///Given Number Is Positive
    }

    if(a < 0)
    {
        printf("Given Number Is Positive\n");     ///Given Number Is Negative
    }

    if(a = 0)
    {
        printf("Given Number Is Zero\n");        ///Given Number is Zero
    }
    return 0;
}
