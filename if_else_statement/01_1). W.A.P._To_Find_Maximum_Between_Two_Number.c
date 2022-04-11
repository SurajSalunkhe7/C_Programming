#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter a First Number:\n");          ///Input a First Number For User
    scanf("%d",&a);

    printf("Enter a Second Number:\n");         ///Input a Second Number For User
    scanf("%d",&b);

    if(a > b)
    {
        printf("%d is Maximum",a);             ///Compare a With b
    }

    else
    {
        printf("%d Is Maximum",b);             /// False Part Means a<b
    }
    return 0;
}
