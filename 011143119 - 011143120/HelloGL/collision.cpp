#include "hello.h"

/* Function to check for collisions */
int check_collision(object *a, object *b)
{
    /*The sum of the Radii */
    float dist1 = a->radius + b->radius;

    float x1 = a->x;
    float y1 = a->y;
    float x2 = b->x;
    float y2 = b->y;
    float xdiff = fabs(x1 - x2);
    float ydiff = fabs(y1 - y2);
    /*The Distance Between the points */
    float dist2 = sqrt((xdiff * xdiff) + (ydiff * ydiff));

    if(dist1 > dist2)
        return 1;
    else
        return 0;
}


