#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int head_or_tails=(rand()%2);

    printf("Ich werfe eine Muenze, sie landet auf: %d\n",&head_or_tails); 

    return 0;
}
