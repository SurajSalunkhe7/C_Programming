#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d",&a);

    if(a %2 == 0)
    {
        printf("Given Number Is Even Number\n");
    }

    else
    {
        printf("Given Number Is Odd Nummber\n");
    }
    return 0;
}
