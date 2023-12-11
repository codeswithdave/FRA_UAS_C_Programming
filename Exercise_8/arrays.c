/*---- Aufgabe 34 -----*/
#include <stdio.h>

int arr[10];

void ausgabe(){

    int i;
    for(i=0;i<10;i++){
      printf("Die Zahl an Index[%d]= %d\n",i,arr[i]);
    }
}

int summe(){
        int i, summe=0;
        for(i=0;i<10;i++){
         summe+=arr[i];
        }
        return summe;
}

int main(){

    int i;
    for(i=0; i<10;i++){
        printf("Bitte geben Sie die %dte Zahl ein: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n");
    ausgabe();

    printf("Die Summe alle Felder im Array sind: %d\n",summe());

    for(i=0;i<10;i++){
            arr[i]=-arr[i];
    }
    printf("Die Summe aller Felder im Array invertiert sind: %d\n",summe());
    return 0;
}
