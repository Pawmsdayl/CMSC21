/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    // initialize variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    // ask for values, scan inputs in fraction format,  assign to corresponding variables
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // process values through simple math
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom2 * denom1;

    // print result in fraction format
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
