#include<stdio.h>

int main(){
    char a= 'Q';// ranges -127 to 127
    //signed char b='-1'; what is signed character ?????? ranges -127 to 127
    signed char d='1';//ranges -127 t0 127
    unsigned char c= '$';//ranges 0 to 255   always positive 

    printf("the value of a is %c\n",a);
    //printf("the value of b is %c\n",b);
    printf("the value of c is %c\n",c);
    printf("the value of d is %c\n",d);

return 0;
}