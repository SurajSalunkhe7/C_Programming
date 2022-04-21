#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d",&a);

    switch(a>0)
    {
        case 1:
        printf("Given Number Is Positive");
        break;

        case 0:
        switch(a<0)
        {

        case 1:
        printf("Given number Is Negative\n");
        break;

        case 0:
        printf("Given Number Is Zero\n");
        break;
        }
    break;

    }
    return 0;
}
