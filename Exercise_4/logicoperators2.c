/*---- Aufgabe 15 b -----*/
#include <stdio.h>

int main()
{
     int a,b;
     printf("Bitte geben Sie den ersten Wert ein: ");
     scanf("%d",&a);

    printf("Bitte geben Sie noch ein Wert ein: ");
    scanf("%d",&b);

    printf("%d && %d ergibt: %d\n",a,b,a&&b);
    printf("%d || %d ergibt: %d\n",a,b,a||b);
    // 0 wird in C als falsch intrpretiert und alle Zahlen größer oder gleich ein als wahr auch bei negativen Zahlen.
    printf("%d | %d ergibt: %d\n",a,b,a|b);
    //Intern werden Bits wie in der Wahrheittafel verglischen - Mindest ein Wert muss eine 1 haben um wahr zu sein.
    printf("%d & %d ergibt: %d\n",a,b,a&b);
    //Intern werden Bits wie in der Wahrheittafel vergliechen - Beide Werte müssen eine 1 haben um wahr zu sein.


 return 0;
}
