/*---- Aufgabe 24 -----*/
#include <stdio.h>
//Funktionsdeklaration (Prototypen)
float quadratEinerFliesskommazahl(float x);
int quadratEinerGanzzahl(int n);
int summeDerErstenNNatuerlichenZahlen(int n);
void summeDerNatuerlichenZahlenVonMBisN(int m, int n);

//Funktionsinitalisierung
float quadratEinerFliesskommazahl(float x){
    return x*x;
}

int summeDerErstenNNatuerlichenZahlen(int n){
    int i;
    int j=0;
    if(n>0){
        for(i=0;i<=n;i++){
            j+=i;
        }
        return j;
    }
    else{
        return 0;
    }
}

int quadratEinerGanzzahl(int n){
    return n*n;
}

void summeDerNatuerlichenZahlenVonMBisN(int m, int n){
    if(m>n){
        printf("Falsche Eingabe! m ist größer n.\n");
    }
    else if(m<0||n<0){
        printf("Falsche Eingabe m oder n ist kleiner als 0!\n");
    }
    else{
        printf("Das Ergbnis n=%d - m=%d ist: %d\n",summeDerErstenNNatuerlichenZahlen(n),summeDerErstenNNatuerlichenZahlen(m),summeDerErstenNNatuerlichenZahlen(n)-summeDerErstenNNatuerlichenZahlen(m));
    }
}
//Hauptprogramm
int main(){
int a,b;
printf("\n\tBerechnungesprogramm\n");
printf("Bitte geben sie eine Zahl fuer m ein: ");
scanf("%d",&a);
printf("Bitte geben sie eine Zahl fuer n  ein: ");
scanf("%d",&b);

printf("Sie haben %d und %d angebgeben als Zahlen.\n",a,b);
printf("\n");
//Funktionsauruf in das Hauptprogramm
printf("Quadriert als ganze Zahlen ergibt dies: %d und %d\n",quadratEinerGanzzahl(a),quadratEinerGanzzahl(b));
summeDerNatuerlichenZahlenVonMBisN(a,b);




    return 0;
}
