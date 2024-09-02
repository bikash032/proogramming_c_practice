#include<stdio.h>

int main(){
    float a=0.45;//ranges 1E-37 to 1E+37 along with six digits of the precisions 
  double b=11111111.34455;// ranges 1E-37 to 1E+37 along with six digits of the precisions
  long double c = -1113333444555666.233445;// ranges 1E-37 to 1E+37 along with six digits of the precisions

    printf("the value of a is %f\n",a);
    printf("the value of b is %f\n",b);
    printf("the value of c is %Lf\n",c);
return 0;
}