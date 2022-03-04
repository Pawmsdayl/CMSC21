/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    // initialize variables
    int i, j;
    float x, y;

    // assign values to variables according to data type
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    // print values with %[data type]
    // variable arguments must also be in order
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    return 0;
}