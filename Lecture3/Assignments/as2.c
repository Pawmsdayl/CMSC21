/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

int main() {
    int num;
    
    printf("Input two-digit number: ");
    scanf("%d", &num);
    printf("Input is ");
    
    // tenths digit
    switch (num/10) {
        case 1: // teens
            switch (num%10) {
                case 0:
                    printf("ten.");
                    break;
                    
                case 1:
                    printf("eleven.");
                    break;
                case 2:
                    printf("twelve.");
                    break;
                case 3:
                    printf("thirteen.");
                    break;
                case 4:
                    printf("forteen.");
                    break;
                case 5:
                    printf("fifteen.");
                    break;
                case 6:
                    printf("sixteen.");
                    break;
                case 7:
                    printf("seventeen.");
                    break;
                case 8:
                    printf("eighteen.");
                    break;
                case 9:
                    printf("nineteen");
                    break;
            }
            return 0;
        
        case 2:
            printf("twenty");
            break;
        
        case 3:
            printf("thirty");
            break;
        
        case 4:
            printf("forty");
            break;
        
        case 5:
            printf("fifty");
            break;
        
        case 6:
            printf("sixty");
            break;
        
        case 7:
            printf("seventy");
            break;
        
        case 8:
            printf("eighty");
            break;
        
        case 9:
            printf("ninety");
            break;
        
        default:
            printf("Invalid input! Must be two-digit positive integer. Try again.");
            return 0;
    }
    
    //ones digit
    switch (num%10) {
        case 1:
            printf("-one");
            break;
        
        case 2:
            printf("-two");
            break;
        
        case 3:
            printf("-three");
            break;
        
        case 4:
            printf("-four");
            break;
        
        case 5:
            printf("-five");
            break;
        
        case 6:
            printf("-six");
            break;
        
        case 7:
            printf("-seven");
            break;
        
        case 8:
            printf("-eight");
            break;
        
        case 9:
            printf("-nine");
            break;    
    }
    
    printf(".");
    return 0;
}