/*---- Aufgabe 14 b -----*/
#include <stdio.h>

int main()
{
    int a;
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d",&a);

    printf("Nun wird die Zahl mit Postfix (a++) um eins erhoeht: %d\n",a++);
    printf("Nun wird die Zahl mit Prefix (++a) um eins erhoeht: %d\n",++a);

    printf("Nun wird die Zahl mit Postfix (a--) um eins vermindert: %d\n",a--);
    printf("Nun wird die Zahl mit Prefix (--a) um eins vermindert: %d\n",--a);

 return 0;
}
