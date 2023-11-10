/*---- Aufgabe 17 a -----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Mit der Funktion srand() pflantzt man quasi den Anfangspunkt in die Zahlensequnez von rand() - elaubt für eine mehr zufällige Zahlaussuche.
    srand(time(NULL));
    int random_value=rand();
    //Die Funktion rand() gibt eine Zahl ziwssch 0 und RAN_MAX wieder aus einer Zahlensequnez.

    printf("Zufallszahl aus [0,%d]: %d\n", RAND_MAX,random_value);
    int lower, upper;
    printf("Bitte untere Grenze angeben: ");
    scanf("%d", &lower);
    printf("Bitte obere Grenze angeben: ");
    scanf("%d", &upper);
    
    //Die Variablen upper und lower fungieren als Grenzen für die Variablen.
    random_value=(rand()%(upper-lower+1)) + lower;
    printf("Zufallszahl zwischen %d und %d: %d\n",lower,upper,random_value);
    
 return 0;
}
