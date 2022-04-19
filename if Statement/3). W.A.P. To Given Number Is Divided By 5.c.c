#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a Number\n");
    scanf("%d",&a);

    if(a % 5 == 0)
    {
        printf("%d Divided By 5");
    }
    return 0;
}
