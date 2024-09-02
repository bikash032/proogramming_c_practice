#include <stdio.h>

int main()
{
    int a = 25; // = assignment
    int b = 5;

    printf("the value of a=bis:%d\n", a = b);
    printf("the value of a+=b is:%d\n", a += b);
    printf("the value of a-=b is:%d\n", a -= b);
    printf("the value of a*=b is:%d\n", a *= b);
    printf("the value of a/=b is:%d\n", a /= b);
    printf("the value of a%%=b is:%d\n", a %= b);
    printf("the value of a&=b is:%d\n", a&= b);
    printf("the value of a|=b is:%d\n", a|=b);
    printf("the value of a>>=b is:%d\n", a>>=b);
    printf("the value of a<<=b is:%d\n", a<<=b);

    return 0;
}