/*---- Aufgabe 27 -----*/
#include <stdio.h>

int main (){
    char c;
    char i;

do{

    printf("\tChemische Elementensammlung\n");
    printf("Bitte geben Sie ein Zeichen ein (z.b H für Helium):");
    scanf(" %c",&c);

    //Das Leerzeichen vor dem % dient dazu Space und Enter Tastendrücke zu ignorieren.
    printf("Sie haben %c eingegeben.\n",c);

    switch(c){
        case 'H':
        case 'h':
            printf("Helium\n");
        break;

        case 'K':
        case 'k':
            printf("Kalium\n");
        break;

        case 'Y':
        case 'y':
            printf("Yttrium\n");
        break;

        case 'V':
        case 'v':
            printf("Vanadium\n");
        break;

        case 'W':
        case 'w':
            printf("Wolfram\n");
        break;

        case 'B':
        case 'b':
            printf("Bor\n");
        break;

        case 'C':
        case 'c':
            printf("Kohlenstoff\n");
        break;

        case 'N':
        case 'n':
            printf("Stickstoff\n");
        break;

        case 'P':
        case 'p':
            printf("Phosphor\n");
        break;

        case 'O':
        case 'o':
            printf("Sauerstoff\n");
        break;

        case 'S':
        case 's':
            printf("Schwefel\n");
        break;

        case 'F':
        case 'f':
            printf("Fluor\n");
        break;


        case 'I':
        case 'i':
            printf("Iod\n");
        break;


        case 'U':
        case 'u':
            printf(" Uran\n");
        break;

        default:
            printf("Dies chemische Element existiert nicht!\n");


    }
    printf("Drücken Sie die Null (0) um abzubrechen: ");
    scanf(" %c",&i);
//Hier wird nach ein char gefragt da mein den Fall ausschliessen möchte dass benutzer auch Buchstaben einsetzt. Interger ging auch wenn der Nutzer nur Zahlen eingibt. 
    printf("\n");
}while (i!='0');

    printf("Programm beendet!\n");
   return 0;
}
