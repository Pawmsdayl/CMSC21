/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    int inp, x, y;
    // x = n
    // y = 2^n

    printf("Input n: ");
    scanf("%d", &inp);

    printf("-n- ---2^n---\n");
    y = 1;
    for (x = 0; x<=inp; x++) {
        printf("%3d %-9d\n", x, y);
        y*=2;
    }

    return 0;
}