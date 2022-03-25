/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int valid_input(int min, int max) {
    /* Ensures input is within validity range from 
    given minimum to given maximum */
    int inp;

    while(1) { // exits only when inp is within range
        printf("\nInput [%d-%d]: ", min, max);
        scanf("%d", &inp);
    
        if (inp>=min && inp<=max) {     // valid, within range
            return inp;
        } else {                        // invalid
            printf("Invalid input! Must be from %d to %d only. Try again.", min, max);
            // loop back to Input
        }
    }
}

int main(void) {
    int days, start, n;

    /*~~~ INPUTS ~~~*/
    printf("How many days in the month?");
    days = valid_input(28, 31);
    printf("\nWhich day of the week to start on?\n    1.) Sunday\n    2.) Monday\n    3.) Tuesday\n    4.) Wednesday\n    5.) Thursday\n    6.) Friday\n    7.) Saturday");
    start = valid_input(1, 7);

    /*~~~ OUTPUT CALENDAR ~~~*/
    printf("\nSu Mo Tu We Th Fr Sa\n");
    
    // Start of Week Spacing
    for (n=1; n<start; n++) {
        printf("   ");
    }

    // Days
    start = (8-start)%7; // signifies end of row
    
    for (n=1; n<=days; n++) {
        printf("%2d ", n);
        
        // when end of row, print new line
        if (n%7==start) {
            printf("\n");
        }
    }

    return 0;
}
