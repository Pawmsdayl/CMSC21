/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    int num;

    printf("Input a three digit integer: ");
    scanf("%d", &num);
    printf("Reverse: %d", num%10*100 + num%100/10*10 + num/100);

}