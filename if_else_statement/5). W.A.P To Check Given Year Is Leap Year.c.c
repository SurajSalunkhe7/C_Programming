#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter Year:\n");
    scanf("%d",&year);

    if(((year %4 ==0) && (year % 100 != 0)) || (year %400 == 0))
        {
            printf("Given Year Is Leap Year\n");
        }

        else
            {
                printf("Given Year is Common Year/n");
            }

    return 0;
}
