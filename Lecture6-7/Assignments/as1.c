/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>

#define ROW 8
#define COL 8

/*~~~ GLOBAL VARIABLES ~~~*/
char points[9] = "ABCDEFGH";

int road_networks[ROW][COL] = {
    //       A   B  [C] [D]  E   F   G   H   
    /*A*/   {1,  1,  0,  0,  0,  1,  0,  0},
    /*B*/   {1,  1,  1,  0,  0,  0,  0,  0},
    /*C*/   {0,  1,  1,  0,  1,  1,  0,  0},
    /*D*/   {0,  0,  0,  1,  1,  0,  0,  0},
    /*E*/   {0,  0,  0,  1,  1,  0,  0,  0},
    /*F*/   {1,  0,  1,  0,  0,  1,  0,  0},
    /*G*/   {1,  0,  0,  1,  0,  0,  1,  0},
    /*H*/   {0,  0,  0,  0,  0,  1,  0,  1},
};

/*~~~ FUNCTIONS ~~~*/
void print_network (void) {
    /* Prints out the entire road network */
    int i, j;
    
    // print point letters with corresponding spacing and inclusion of bracket
    printf("       ");
    for (i = 0; i < ROW; i++) {
        switch (i) {
            case 1:
                printf("%-5c", points[i]);
                break;

            case 2:
                printf("[%c]   ", points[i]);
                break;
            
            case 3:
                printf("[%c]    ", points[i]);
                break;

            default:
                printf("%-6c", points[i]);
                break;
        }
    }

    // print each row with their road_network values
    for (i = 0; i < ROW; i++) {
        // for row header
        if (i==2 || i==3) {
            // for charging stations, input bracket
            printf("\n[%c]    ", points[i]);    
        } else {
            printf("\n %-6c", points[i]);
        }

        // for road_network values
        for (j = 0; j < COL; j++) {
            printf("%-6d", road_networks[i][j]);
        }
    }
}

int valid_inp (void) {
    /* Ensures user input is within valid range of 0 to 7 */
    int cur_point;

    while(1) {      // only ends when user inputs valid input
        printf("\nInput [0-7]: ");
        scanf("%d", &cur_point);

        if (cur_point<0 || cur_point>7) {
            printf("Invalid input! Must be integer from 0 to 7. Try again.");
        } else {
            return cur_point;
        }
    }
}

void traverse_to (int cur_point) {
    /* Traverses the current point until it reaches a charging station */
    printf("At point %c\n", points[cur_point]);

    if (cur_point==2 || cur_point==3) {
        // cur_point is at a charging station, end traverse_to recursive function, print arrival
        printf("Arrived at charging station %c\n", points[cur_point]);    
        
    } else if (road_networks[cur_point][2]) {
        // cur_point can go to charging station C, traverse there
        printf("==> ");
        traverse_to(2);
    
    } else if (road_networks[cur_point][3]) {
        // cur_point can go to charging station D, traverse there
        printf("==> ");
        traverse_to(3);
    
    } else {
        // cur_point is no where immediate to a charging station
        int nxt_point;

        for (nxt_point = 0; nxt_point < 8; nxt_point++) {
            // find traversable point, traverse there
            if ((nxt_point != cur_point) && (road_networks[cur_point][nxt_point])) {
                printf("==> ");
                traverse_to(nxt_point);
                break;
            }
        }
    } 
}

int main (void) {
    int cur_point;

    print_network();

    printf("\n\nSet initial point:\n    (0) A\n    (1) B\n    (2) C\n    (3) D\n    (4) E\n    (5) F\n    (6) G\n    (7) H");
    cur_point = valid_inp();

    printf("\n");
    traverse_to(cur_point);

    return 0;
}