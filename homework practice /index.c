#include <stdio.h>

int main()
{
    // int a= 09;==> 09 make compiler confuse as it is octa decimal no.
    // insted we must write only 9
    // char b='52'; ==> it is string so must be in " " ,,shows error
    // and char must be inside one '  ' with only one letter,sign.value etc
   // without any iverted comma will be the compiler execute error for letter 
   //  A  as letter have not any specific char That are compiler can take    
    double  c = 2225.53;
    double a = 99.245;
    float d = -99.5;
    double e = 999999.21;
    printf("%lf\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);
    printf("%lf\n",a);
    return 0;
}