/*---- Aufgabe 14 a. -----*/
#include <stdio.h>


int main(){

    int i;
    double fac_sum=1;

//Die For-Schleife
    for(i=1; i<=50;i++){
        fac_sum=fac_sum*i;

    }
        printf("Die Fakultät von 50! in der For-Schleife ist: %.0lf\n",fac_sum );

//Die While-Schleife
    fac_sum=1;
    i=1;

    while(i<=50){
        fac_sum=fac_sum*i;
        i++;
    }
        printf("Die Fakultät von 50! in der While-Schleife ist: %.0lf\n",fac_sum );


//Die Do-While-Schleife
    fac_sum=1;
    i=1;

    do{
        fac_sum=fac_sum*i;
        i++;

    }while(i<=50);
        printf("Die Fakultät von 50! in der Do-While-Schleife ist: %.0lf\n",fac_sum );


    return 0;
}
