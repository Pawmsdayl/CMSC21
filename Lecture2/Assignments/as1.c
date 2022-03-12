/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    int num;

    printf("Input a two digit integer: ");
    scanf("%d", &num);
    printf("Reverse: %d", num%10*10 + num/10);

}