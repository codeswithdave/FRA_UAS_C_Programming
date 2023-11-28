#include <stdio.h>

int main (){
  int a =5;
  float pi=3.14159; 
  char c='T'; 
  
  printf("Ergebnisse: a = %d, pi = %f, c = %c\n", a, pi, c); 
  //In eine printf Funktion werden zuerst nach \ und % geschaut vom Compiler. 
  //\n - Neue Zeile 
  //%d oder %i für Integer - %u für unsigned
  //%f oder %lf für Fliesskommazahlen
  //%x oder %x für Hexadezimalzahlen
  //%c für einzelne Zeichen 
  //%s für Zeichenketten
  //%p für Pointer
  //%% für % als Ausgabe 
  int val; 
  scanf("%d",&val) // scanf erlaubt von der Tastatur das einlessen eine Wertes
  //Hierbei sind 2 Dinge zu bachten ersten den Platzhalter der richtigen Datentypen des Variables 
 //Den & gefolgt von der Variable an welhe Adress man dies abspeichern möchte. 
  return 0; 
}
