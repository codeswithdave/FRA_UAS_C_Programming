/*---- Aufgabe 20 -----*/
#include<stdio.h>
int main()
{
//Die erste Ausgabe ich zack-zack#@!= %% gegeben
int i = 13;
//Damit Zickzack-Muster augegeben wird muss: 

//Die erste If-Anweiung 1 ergeben. - "Zick"
    if (--i){
        printf("Zick");
    }
    else
    {
        printf("zack-");
    }

//Der nächste If-Anweisungs Block muss 1 ergeben - Sprich eine Ungerade Zahl - "zack-"
    if ( (++i)%2 )
    {
        printf("zack-");
    }
    else
    {
    printf("Zick");
    }

// Der letzte Anweisungsblock muss 1 ergeben - Sprich eine Zahl größer als 10 - "Muster"
    if ( (--i) > 10)
    {
    printf("Muster");
    }
    else
    {
    printf("#@!= %%");
    }
    printf("\n");

    return 0;
}
