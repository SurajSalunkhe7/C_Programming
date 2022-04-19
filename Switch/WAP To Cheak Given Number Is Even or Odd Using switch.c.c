#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);

    switch(a%2)
    {
        case 0:                                     ///If n%2 == 0
        printf("Given Number Is Even Number \n");
        break;

        case 1:                                    ///If n%2 == 1
        printf("Given Number Is Odd \n");
        break;
    }
    return 0;
}
