#include <stido.h>

int main(){
int A,B; 
//In C sind alle arimehtisch Operatoren erlaubt diese sind: 
  A+B; //Addition 
  A-B; //Subtraktion
  A*B; //Multiplikation
  A/B; //Division (bei int wird die Nachkommastelle abgeschnitten und abgerundet)
  A%B; //Moduloperator (für char und int)
  
//Für alle diese arithmetische Operaotren gibt es die Zuweisungsoperatoren
  A+=B;   //(steht für A=A+B)
  A-=B;   //(steht für A=A-B)
  A*=B;   //(steht für A=A*B)
  A/=B;   //(steht für A=A/B)
  A%=B;   //(steht für A=A%B) 

//Inkrementation und Dekramenttion ist wichtig, besonders bei Schleifen
  A++; //Postfix Erhöhung - erst nach der Anweisung wird erhöht
  ++A; //Prefix Erhöhrung - In der Anweisung wird erhöht
  A--; //Postfix Verringerung - erst nach der Anweisung wird verringter
  ++A; //Prefix Verringerung - In der Anweisung wird veringert

//Beispiel
  int a,b; 
  a =5; 
  b=a++; //In der Zeile noch 5 
  //In dieser Zeile 6 

  int a,b; 
  a =5; 
  b=++a; //In der Zeile 6

return 0; 

}
