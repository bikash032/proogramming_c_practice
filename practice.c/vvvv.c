#include <stdio.h>

int main()
{
    int x = 5;
    int y = 12;
    // x=++y;
    x = y++;
    printf("thw value of x is:%d\n", x);
    printf("thw value of y is:%d", y);
    return 0;
}