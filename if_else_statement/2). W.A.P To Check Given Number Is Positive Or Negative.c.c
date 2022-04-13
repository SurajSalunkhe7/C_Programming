#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a Number:\n");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("Given Number Is Positive\n");
    }

    else
    {
        printf("Given Number Is Negative\n");
    }
    return 0;
}
