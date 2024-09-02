#include <stdio.h>

int main()
{
    int a;
    printf("put the value ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("then odd");
    }

    return 0;
}