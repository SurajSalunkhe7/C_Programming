#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter First Numbers:\n");         ///Input First Numbers for User.
    scanf("%d",&a);

    printf("Enter Second Numbers:\n");         ///Input Second Numbers for User.
    scanf("%d",&b);

    if(a > b)
    {
        printf("Maximum is:%d\n");            ///If a Is Maximum
    }


    if(b > a)
    {
        printf("Maximum is:%d\n");            ///If b Is Maximum
    }


    if(a == b)
    {
        printf("Both Are Equal\n");           ///Both Are Equal
    }

    return 0;
}
