#include <stdio.h>
#include<string.h>
int main()
{
    char a[18] = {'b', 'i', 'k', 'a', 's', 'h', '_', 'b', 'i', 's', 'h', 'o', 'k', 'a', 'r', 'm', 'a', '\0'};
    char b[17] = {"bikash_bishokarma"};

    printf("My name is: %s\n", a);
    printf("My name is: %s\n", b);
    return 0;
}