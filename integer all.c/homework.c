#include <stdio.h>
int main()
{
  char e[]="52";
  char j = '5';
  int a = 5;
  int b = -9;
  long double c = 99999999999999999.23L; // Ensure the value is correct
  char d = 'A';
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%.2Lf\n", c); // Print with 2 decimal places
  printf("%c\n", d);
  printf("%s\n", e);
  printf("%c", j);
  return 0;
}