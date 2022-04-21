#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float n1,n2;
    printf("IT SIMPLE CALCULATER\n");
    printf("---------------------------\n");
    printf("Enter n1[+,-,*,/] n2\n");
    scanf("%f%c%f",&n1,&op,&n2);

    switch(op)
    {
    case '+':
        printf("ANS=%f",n1+n2);
        break;

    case '-':
        printf("ANS=%f",n1-n2);
        break;

    case '*':
        printf("ANS=%f",n1*n2);
        break;

    case '/':
        printf("ANS =%f",n1/n2);
        break;

    default :
        printf("Invalid Operater");
    }
    return 0;
}
