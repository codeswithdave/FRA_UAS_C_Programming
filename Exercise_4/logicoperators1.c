/*---- Aufgabe 15 a -----*/
#include <stdio.h>

int main()
{
    const int wahr=1;
    const int falsch=0;

    printf("x   y     NOT x   Not y   x AND y     x OR y      x XOR y     ~x\n");
    printf("%d  %d        %d         %d       %d          %d            %d        %d\n",(wahr),(!falsch),(!wahr),(!!falsch),(wahr&&!falsch),(wahr||!falsch),(wahr^!falsch),(~wahr));
    printf("%d  %d        %d         %d       %d          %d            %d        %d\n",(wahr),(falsch),(!wahr),(!falsch),(wahr&&falsch),(wahr || falsch), (wahr^falsch),(~wahr));
    printf("%d  %d        %d         %d       %d          %d            %d        %d\n",(!wahr),(!falsch),(!!wahr),(!!falsch),(!wahr&&!falsch),(!wahr||!falsch),(!wahr^!falsch),(~!wahr));
    printf("%d  %d        %d         %d       %d          %d            %d        %d\n",(!wahr),(falsch),(!!wahr),(!falsch),(!wahr&&falsch), (!wahr||falsch), (!wahr^falsch),(~!wahr));

 return 0;
}
