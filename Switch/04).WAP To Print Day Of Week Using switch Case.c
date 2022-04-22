#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Week;
    printf("Enter a Week Number (1-7):\n");
    scanf("%d",&Week);

    switch(Week)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednsday");
        break;

        case 4:
        printf("Thusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default :
        printf("Enter Number Between (1-7)");

    }
    return 0;
}
