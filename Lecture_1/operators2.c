#include <stido.h>

int main (){
//Ausdrücke von Variablen kann man in C mit einander vergleichen. Hier zu benutzt mal Relationale Operatoren
// Es können nur 2 Arten der Wahreitswerte angenommen werden gleich 0 (false) Alles ander als 0 (wahr). Dies ist wichtig für Schleifen, Switch Case und If Anweisugen. 
 int A,B; 
 A==B; //Gleichheitsoperator
  A!=B; //Ungleichsoperator
  A<B; //Kleinervergleich
  A>B; //Grosservergleich
  A<=B; //Kleiner-Gleichvergleich
  A>=B//Grosser-Gleichvergleich
// Wichtig: Zuweisungsoperator (=) nicht mit Gleichheistiperator (==) verwechseln. 

//Logische Operatoren 
  A&&B; // UND-Operator - Beide müssen wahr sein um wahr zu sein sonst immer falsch, 
  A||B; //ODER-Operator - Mind. eins muss wahr sein damit es wahr ist sonst immer falsch. 
  !A; //Negation - Tut den Wahrheitswert umdrehen.

  //Bitweisoperatoren 
  //Diese dienen dazu die Maipulaton von Bits bei Variablen (sehr hardwarnah)
  A&B; //bitweises UND - Tut die Bits zusammenadiern
  A|B; //bitweises ODER - Tut die bits vergleichen und addiert die zusammen 
  A^B; //bitweises eklusiv Oder - Tut die bits vergleichen und addiert die zusammen bei 1 oder 1 wirds zur 0 
  ~A; // bitweise Negation - Tut alle 1 in 0 verwandeln
  A<<1; //bitweise Linksschieboperator - Tut die Bits um ein nach links verschieben
  A>>1; //bitweise Rechtsschieboperator- Tut die Bits um eins nach rechts verschieben

  //Verbindungsstärke
  /*
  stärkste 
  
  ()
  !,++,--,+,-,*,&,(typ),sizeof
  +,/,%
  +,-
  <,<=,>,>=
  ==,!=
  &&
  ||
  ?:
  =,+=,-=,*=,/=,%=
  
  schwächste
  */
  
 return 0; 
}
