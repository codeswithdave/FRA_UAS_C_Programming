/*---- Aufgabe 28 -----*/
#include <stdio.h>

int main (){

    int a;
    printf("\n\tDreieckprogrmm\n");
    printf("Bitte geben Sie die Variable a eine Wert: ");
    scanf("%d",&a);
  
//Aufgabenblatt Version
    if(a>0){

        int i=0;
        int j;

        while(i<a){
            j=0;

            while(j<=i){
                printf("*");
                j++;
            }

            printf("\n");
            i++;

        }

    }

 //Meine Version
    int i;
    int j;
  
    for(i=0;i<=a;i++){
        
       for(j=0;j<i;j++){
        
           printf("*");
        }
        printf("\n");
    }

    return 0;
}
