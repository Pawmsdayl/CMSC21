/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main(void) {
    // initialize variables
    int i;
    float x;

    // assign values to variables according to data type
    i = 40;
    x = 839.21f;

    // print integer i with different spacing
    /* %d is normal; %5d is 5 chars long, right-aligned;
       %-5d is 5 chars long, left-algined;
       %5.3d is 5 chars long, 3 chars min, 0 for missing digits, right-aligned.
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    
    // print integer i in different forms
    /* %10.3f is in fixed decimal form, 10 chars long, 
       3 digits after decimal, right-aligned; 
       %10.3e is in exponential form, 10 chars long, 
       3 digits after decimal, right-aligned;
       %-10g could either be fixed or exponential, 10 chars long,
       left-aligned. 
    */
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}