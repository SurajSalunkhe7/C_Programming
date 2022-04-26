#include<stdio.h>
int main()

{
    int i=0,n;
    printf("Enter Any Number:\n");
    scanf("%d",&n);

    while(i <= n)
    {
        printf("%d\n",i);
        i = i+5;
    }
    return 0;
}
