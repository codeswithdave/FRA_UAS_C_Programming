#include <stido.h>
//Casting ist ein Typumwandung von Datentypen damit nicht veloren geht wie bei der Division von Integer
int main (){
//Beispiel   
  int i,j; 
  float r; 
  r=(double)i/j; //unsauber
  r=(double)i/(double)j; //sauber 
  i=(int)r; //sauber
  return 0; 
}
