#include <stdio.h>
// Einzeiliger Kommentar

/* Mehrer zeiliger 
  Kommentar */

//Schlüsselworter dürfen nicht als Variablennamen benutzt werden
int main(){
  
//In C muss man Variablen so definieren: [Datentyp] [Variablenname] 
double x; //Was soll das bedeuteuten ? 
double distance; // Besser beschreibung 
//Mit der Funktion sizeof() kann man die Länge eine beliebigen Datentypen in Bytes anzeigen. 

  char a='A'; //Datenty für ein Zeichen - 1 Byte 
  int b= 42; //Datentyp für ganze Zahl - 4 Byte 
  float c=42.00; // Datentyp für relle Zahl - 4 Byte
  double d=42.42; //Datentyp für relle Zahle nur doppelt - 8 Byte
  void e; // Leere Menge an Wert - Keine Bytes
  //void wird oft in der für Funktion benutzt. 

  //Erweitert elenmentar Datentypen
  unsigned char f='b'; // 1 Byte
  unssigned int=42;  // 4 Byte
  short int=12; // 2 Byte 
  long int =4; // 8 Byte 
  long double=.42.41; //16 Byte
  return 0; 
}
