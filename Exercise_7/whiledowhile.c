/*---- Aufgabe 27 -----*/
#include <stdio.h>

int main(){

    int n, sum;
        printf("Bitte eine Zahl für n eingeben: ");
        scanf("%d",&n);
        sum=0;
  // Diese Schleif addiert alle n-zahlen einer Zahl bi 0 und subtrahiert -3 am Ende
    while(n>-3){
        sum+=n;
        n--;
    }

//Diese Schleife führt das selbe aus
    printf("%d\n",sum);

        printf("Bitte eine Zahl für n eingeben: ");
        scanf("%d",&n);
        sum=0;
    do{
        sum+=n;
        n--;

    }while(n>-3);

    printf("%d\n",sum);

    return 0;
}
