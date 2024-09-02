#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("put value of a;");
    scanf("%d", &a);
    printf("put value of b;");
    scanf("%d", &b);
    printf("put value of c;");
    scanf("%d", &c);
    printf("put value of d;");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a is greater then b and c  and d");
    }
    else if (b > a && b > c && b > d)
    {
        printf(" b is greater then a and c and d");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is greater then a and b and d");
    }
    else
    {
        printf("d is greaterthen a,b,c");
    }

    return 0;
}