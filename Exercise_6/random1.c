/*---- Aufgabe 29 -----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    srand(time(NULL));
    int random_zahl;
    int random_zeit;

    while(1){
        random_zeit=(rand()%10+90);
        random_zahl=(rand()%57+50);
        printf("%c",random_zahl);
//Erzwingt was in den Ausgabenpuffer ist auszugeben in der Printf-Anweisung.         
        fflush(stdout);
        usleep(random_zeit);

    }
    return 0;
}

