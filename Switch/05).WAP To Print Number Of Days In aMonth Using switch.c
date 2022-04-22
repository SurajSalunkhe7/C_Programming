#include<stdio.h>

int main()
{
    int Month;

    printf("Enter Month Number (1-12):");
    scanf("%d",&Month);

    switch(Month)
    {
    case 1:
    printf("31 Days");
    break;

    case 2:
    printf("28/29 Days");
    break;

    case 3:
    printf("31 Days");
    break;

    case 4:
    printf("30 days");
    break;

    case 5:
    printf("31 Days");
    break;

    case 6:
    printf("30 Days");
    break;

    case 7:
    printf("31 Days");
    break;

    case 8:
    printf("31 Days");
    break;

    case 9:
    printf("30 Days");
    break;

    case 10:
    printf("31 Days");
    break;

    case 11:
    printf("30 Days");
    break;

    case 12:
    printf("31 Days");
    break;

    default :
    printf("Invalid Input! Enter Number Between 1-12");
}
    return 0;
    }

