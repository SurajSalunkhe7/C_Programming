#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter Any Character:\n");
    scanf("%d",&ch);

    if((ch >= 'a' && ch<='z') || (ch >= 'A' && ch<= 'Z'))
    {
        printf("Given Character Is ALPHABET\n");
    }

    else
    {
        printf("Given Character Is Not ALPHABET\n");
    }

    return 0;
}
