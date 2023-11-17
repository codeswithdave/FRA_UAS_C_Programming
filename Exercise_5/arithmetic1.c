/*---- Aufgabe 18 a -----*/
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

  if (b==0){
    printf("2 / 0 = Division durch 0 ist nicht definiert!\n");
  }
  else {
    printf("%d / %d = %d\n",a,b,a/b);
  }
 return 0;
}
