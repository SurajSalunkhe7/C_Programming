#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a First Number:\n");
    scanf("%d",&a);

    if((a%2 == 0)&&(a%4 == 0))
    {
        printf("Given Number Is Divisible By Both 2 & 4");
    }


    else
    {
        printf("Given Number Is Not Divisible By Both 2 & 4\n");
    }
    return 0;
}
