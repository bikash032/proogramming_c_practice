#include <stdio.h>

int main()
{
    int age;
    printf("the age of ");
    scanf("%d", &age);
    if (((age >= 16 && (age <= 70)))||(age==10))
    {
        printf("is above 18 and below 70,so can drive\n");
    }
    else
    {
        printf("you are not in the driving catogary,so you cannot drive");
    }
    return 0;
}
