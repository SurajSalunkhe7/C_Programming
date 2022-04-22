#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter First Number:\n");               /// Input two numbers from user
    scanf("%d",&a);

    printf("Enter Second Number:\n");
    scanf("%d",&b);

    switch(a < b)                                     ///Expression (a > b) will return either 0 or 1
    {
       case 0:
       printf("%d Is Maximum",a);
       break;

       case 1:
       printf("%d IS Maximum",b);
       break;

       default :
       printf("Both a And b Are Same");
       break;
    }
    return 0;
}
