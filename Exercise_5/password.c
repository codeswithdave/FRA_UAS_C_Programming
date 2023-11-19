#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(NULL));
    int random_zahl;

    printf("\n\t Passwortgenerator\n");
    printf("Ihr neues Passwort lautet: " );


//Funktion die eine Wert animmt und durch die If Anweisung geht.
int funcRandom(int n){


    if(n>0){

        random_zahl=(rand()%57+70);
        printf("%c",random_zahl);
        funcRandom(n-1);
//Am Ende wird die Funktion wieder in sich selbst aufgerufen und um eins heruntergesetz und noch mal durchgeführt
    }

}

        funcRandom(8);
        printf("\n");
    return 0;
}
