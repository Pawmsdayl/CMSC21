/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    int n, y;

    printf("Input n: ");
    scanf("%d", &n);

    if (n>=0) {         // for positive, print integer
        for (y = 1; n>0; n--) {
            y*=2;
        }
        printf("2^n = %d", y);
    } else {            // for negative, print fraction
        n*=-1;
        for (y = 1; n>0; n--) {
            y*=2;
        }
        printf("2^n = 1/%d", y);
    }

    return 0;
}