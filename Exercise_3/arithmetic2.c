/*---- Aufgabe 13 -----*/
#include <stdio.h>

int main()
{
 float  a,b;

  printf("Bitte erste Zahl eingeben: ");
  scanf("%f",&a);
  
  printf("Bitte zweite Zahl eingeben: ");
  scanf("%f",&b);
  
  printf("%f + %f = %f\n",a,b,a+b);
  printf("%f - %f = %f\n",a,b,a-b);
  printf("%f * %f = %f\n",a,b,a*b);
  printf("%f / %f = %f\n",a,b,a/b);
 return 0;
}
