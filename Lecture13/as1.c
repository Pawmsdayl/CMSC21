/* ~~~~~~~~~~~~~~~~~~~~~~~~
Cordero, Palmsdale Kevin D.
2021-03842
pdcordero@up.edu.ph
~~~~~~~~~~~~~~~~~~~~~~~~ */ 

#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

struct line {
    struct point p1, p2, midpoint;                  // instead of pointer, midpoint as point is easier 
    float slope;
    float distance;
};

float solveSlope(struct line l) {
    return (l.p1.y - l.p2.y)/(l.p1.x - l.p2.x);     // (y1-y2)/(x1-x2)
}

struct point solveMidpoint(struct line l) {
    struct point midpoint;

    midpoint.x = (l.p1.x + l.p2.x)/2;               // (x1+x2)/2
    midpoint.y = (l.p1.y + l.p2.y)/2;               // (y1+y2)/2

    return midpoint;
}

float solveDistance(struct line l) {
    return sqrt(pow(l.p1.x - l.p2.x, 2) + pow(l.p1.y - l.p2.y, 2));     // sqrt((x1-x2)^2 + (y1-y2)^2)
}

void getSlopeInterceptForm(struct line l) {
    printf("y = %gx + %g\n", l.slope, l.p1.y - l.slope * l.p1.x);       // y = mx + b
}

int main(void) {
    struct line l1;

    /* INPUT */
    printf("Input x and y for point1: ");
    scanf("%f %f", &l1.p1.x, &l1.p1.y);
    printf("Input x and y for point2: ");
    scanf("%f %f", &l1.p2.x, &l1.p2.y);
    
    /* PROCESS */
    l1.slope = solveSlope(l1);
    l1.midpoint = solveMidpoint(l1);
    l1.distance = solveDistance(l1);

    /* OUTPUT */
    printf("\nSlope: %g\n", l1.slope);
    printf("Midpoint: (%g, %g)\n", l1.midpoint.x, l1.midpoint.y);
    printf("Distance: %g\n", l1.distance);
    getSlopeInterceptForm(l1);

    /* END */
    printf("\n\nProgram coded by:\n/* ~~~~~~~~~~~~~~~~~~~~~~~~\nCordero, Palmsdale Kevin D.\n2021-03842\npdcordero@up.edu.ph\n~~~~~~~~~~~~~~~~~~~~~~~~ */");
    return 0;
}