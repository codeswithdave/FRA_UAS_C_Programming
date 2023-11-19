/*---- Aufgabe 21 -----*/
#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double x1,x2;

    printf("\n\t Nullstellenberechner\n");
    printf("Bitte geben sie den Wert für a ein: ");
    scanf("%lf",&a);

    printf("Bitte geben sie den Wert für b ein: ");
    scanf("%lf",&b);

    printf("Bitte geben sie den Wert für c ein: ");
    scanf("%lf",&c);

    printf("\n");
//Die eingebene Zahlen werden den Benutzer noch mal angezeigt
    printf("Sie haben für a: %.0lf angegeben\n",a);
    printf("Sie haben für b: %.0lf angegeben\n",b);
    printf("Sie haben für c: %.0lf angegeben\n",c);
//Fall das bx 0 ist.
    if(b==0){
        printf("\nDie Gleichung hat keine Nullstellen da bx = 0 ist\n");
    }
//Fall das c eine Negative Zahl ist
     else if(0>c){
        printf("\nDie Gleichung hat keine Lösung da c < 0 ist\n");
    }
//Fall das a grosser als 1 ist dann muss man erst dividieren.
    else if (a>1){
        b=b/a;
        c=c/a;
        a=a/a;

        x1= ((-1*(b/2))+sqrt(((b/2)*(b/2))-c));
        x2= ((-1*(b/2))-sqrt(((b/2)*(b/2))-c));
//Fall für negative Wurzel ziehen
        if(x1!='\0'&&x2!='\0'){
            printf("\nDie quadratische Formel hat doch keine Nullstellen, da man nicht die Wurzel von negativen Zahlen ziehen kann!\n");
        }
        else{
        printf("\nDie quadratisch Gleichung hat zwei Nullstellen.\n");
        printf("\nDie Nullstellen betragen: x1= %lf und x2= %lf",x1,x2);
    }
    }

    else if(a==1){
//Fall das x^2 keine Konstante vorne hat

        x1= ((-1*(b/2))+sqrt(((b/2)*(b/2))-c));
        x2= ((-1*(b/2))-sqrt(((b/2)*(b/2))-c));
//Fall für negative Wurzel ziehen
        if(x1!='\0'&&x2!='\0'){
            printf("\nDie quadratische Formel hat doch keine Nullstellen, da man nicht die Wurzel von negativen Zahlen ziehen kann!\n");
        }
        else{
        printf("\nDie quadratisch Gleichung hat zwei Nullstellen.\n");
        printf("\nDie Nullstellen betragen: x1= %lf und x2= %lf",x1,x2);
    }
    }
    else if(a==0){
        x1=(c/b)*-1;
        printf("\nDie Gleichung hat nur eine Nullstelle\n");
        printf("\nDiese Nullstele ist: %lf\n",x1);
    }
    return 0;
}
