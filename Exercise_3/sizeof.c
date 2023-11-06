/*---- Aufgabe 11 -----*/
#include <stdio.h>

int main()
{
// Der Grund warum man bei allen verschieden Datentypen den Platzhalter %d braucht ist weil sizeof() ein integer Wert zurück gibt.
printf("Datentyp char belegt %d Bits.\n",sizeof(char)*8);
printf("Datentyp short belegt %d Bits.\n",sizeof(short)*8);
printf("Datentyp integer belegt %d Bits.\n",sizeof(int)*8);
printf("Datentyp float belegt %d Bits.\n",sizeof(float)*8);
printf("Datentyp double belegt %d Bits.\n",sizeof(double)*8);
  
printf("\n");
printf("Zusatzaufgbe:\n");
printf("\n");

printf("Datentyp unsigned short int  belegt %d Bits.\n",sizeof(unsigned short int)*8);
printf("Datentyp unsigned char belegt %d Bits.\n",sizeof(unsigned char)*8);

return 0;
}
