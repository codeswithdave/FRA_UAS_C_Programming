/*---- Aufgabe 22 -----*/
#include <stdio.h>



int main (){

    unsigned long long int s;
    long double r;

    printf("\n\tSekundenumrechner\n");
    printf("\nBitte geben sie die Zeit in Sekunden an (min. 60): ");
    scanf("%llu",&s);

    r=s;
    // 1 Woche in sekunden - 604800, 1 Tag in sekunden - 86400, 1 Stunde in sekunden: 3600, 1 Minute in sekunden 60.
    int wochen=(r/604800.);

    int tage = (((r/604800.) - wochen)*604800)/86400;

    int stunden = (((((r/604800.) - wochen)*604800)/86400 - tage)*86400)/3600 ;

    int minuten = (((((((r/604800.) - wochen)*604800)/86400 - tage)*86400)/3600 - stunden)*3600)/60;

    int sekunden = ((((((((r/604800.) - wochen)*604800)/86400 - tage)*86400)/3600 - stunden)*3600)-minuten)/68.75;

    printf("%llu Sekunden = ",s);
    printf("%d W +", wochen);
    printf(" %d T +",tage);
    printf(" %d S +",stunden);
    printf(" %d M +",minuten);
    printf(" %d S\n",sekunden);


    return  0;
}
