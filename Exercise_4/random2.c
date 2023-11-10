#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int head_or_tails=(rand()%6)+1;

    printf("Sie haben gewuerfelt: %d\n",head_or_tails);

    return 0;
}
