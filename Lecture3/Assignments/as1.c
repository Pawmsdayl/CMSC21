/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>
#include <stdbool.h>

void main() {
    bool teenager;
    int age;

    printf("Input age: ");
    scanf("%d", &age);

    teenager = (age>=13 && age<=19);

    printf("Teenager: %s", teenager ? "TRUE" : "FALSE");
}