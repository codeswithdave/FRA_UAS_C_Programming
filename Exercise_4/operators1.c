/*---- Aufgabe 14 -----*/
#include <stdio.h>

int main()
{
    int a=2,b=1,c=4,d=2;
    int p=1,q=2, r=4;

    printf("Das Ergebnis der Rechnung a * b * c * d ist: %d\n",a*b*c*d);
    //(((a*b)*c)*d)

    printf("Das Ergebnis der Rechnung a - b %% 2 > 7 ist: %d\n",a-b%2>7);
    //((a-(b%2))>)
    
    printf("Das Ergebnis der Rechnung a * 3 / 4 / 2 ist: %d\n",a*3/4/2);
    //(((a*3)/4)/2) - Bei gleicher Priorität wird von links nach rechts gelessen
    
    printf("Das Ergebnis der Rechnung p || !q < r ist: %d\n",p || !q < r);
    //(p || ((!q)<r))

    printf("Das Ergebnis der Rechnung p && q || !r ist: %d\n",p || !q < r);
    //((p&&q) || (!r))

    printf("Das Ergebnis der Rechnung p || !q && r ist: %d\n",p || !q && r);
    //(p || ((!p) && r))
    // C intpretiert die 0 als false und jeder andere Zahl ab 1 als true

 return 0;
}
