/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    int i, inp;

    printf("Input i: ");
    scanf("%d", &inp);

    printf("WHILE\n");
    i = inp;
    while (i<10) {
        printf("%d ", i);
        i++;
    }
    
    i = inp;
    printf("\nFOR\n");
    for (; i<10;) {
        printf("%d ", i);
        i++;
    }

    i = inp;
    printf("\nDO WHILE\n");
    do {
        printf("%d ", i);
        i++;
    } while (i<10);

    return 0;
}