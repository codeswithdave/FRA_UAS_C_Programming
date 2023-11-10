#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int dice_side=(rand()%6)+1;

    printf("Sie haben gewuerfelt: %d\n",dice_side);

    return 0;
}
