/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>
int main(void)                              // Void must be lowercase. Correction: void
{                                           // missing opening bracket. Correction: {
    int sum;                                // INT must be lowecase. Correction: int
    // COMPUTE RESULT                       // header comments must use //, not /*. Correction: //
    sum = 25 + 37 - 19;                     // missing semi-colon at end of line. Correction: ;
    /* DISPLAY RESULTS */                   // /* ends with */, not //. Correction: */
    printf ("The answer is %i\n", sum);     // variables in print must be separated by comma. Correct: ,
    return 0;
}