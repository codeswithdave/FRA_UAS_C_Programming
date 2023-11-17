/*---- Aufgabe 18 b -----*/
#include <stdio.h>

int main()
{
 int  a,b;

  printf("Bitte erste Zahl eingeben: ");
  scanf("%d",&a);

  printf("Bitte zweite Zahl eingeben: ");
  scanf("%d",&b);

  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d - %d = %d\n",a,b,a-b);
  printf("%d * %d = %d\n",a,b,a*b);
  printf("%d * %d = %d (GZ-Div) bzw. %f (FK-Div.)\n",a,b,a/b,((float)a/(float)b));

 return 0;
}
