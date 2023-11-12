#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int head_or_tails=(rand()%2);

    (head_or_tails==0)? printf("Zahl\n"):printf("Kopf\n");

    return 0;
}
