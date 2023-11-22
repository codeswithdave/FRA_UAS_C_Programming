/*---- Aufgabe 26  -----*/
#include <stdio.h>

int main (){
    char benutzer[99];
    int i;

    printf("Bitte gebene Sie ihren Namen ein: ");
    scanf("%99s",benutzer);

    for (i=0;i<25;i++){
        printf("%d. Hello, %s!\n",i+1,benutzer);
    }

    return 0;
}
