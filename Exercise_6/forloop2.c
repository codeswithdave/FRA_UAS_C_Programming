/*---- Aufgabe 26 -----*/
#include<stdio.h>

int main(){
//Das Programm durchläuft eine For Schleife die, die Zahlen 0,2,4,8,10 wieder gibt
    int i = 0;
    int j = 12;

    for(i; i < j-1; i += 2){
        printf("%d ", i);
    }
    printf("\n");

//Alternative Schleife die von 13 bis 25 alle ungerade Zahlen ausgibt
    for (i=13; i<=25; i+=2){
        printf("%d ", i);

    }
    printf("\n");
    return 0;
}
