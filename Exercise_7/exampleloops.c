/*---- Aufgabe 28 -----*/
#include <stdio.h>

int main(){
//Alles diese Schleifen machen das selbe
    int i=10;

    while((i>0)&&(2)){
        printf("Hello World!\n");
        i--;
    }

    printf("\n");

    for(i=10;i>0&&2;i--){
        printf("Hello World!\n");

    }

    printf("\n");

    i=10;

 do{
    printf("Hello World!\n");
    i--;

}while((i>0)&&(2));

    return 0;
}
