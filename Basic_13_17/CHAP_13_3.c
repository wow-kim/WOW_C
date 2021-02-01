#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    int xDiff, yDiff;
    double distance;

    printf("first point : ");
    scanf("%d %d", &p1.x , &p1.y);
    
    printf("second point : ");
    scanf("%d %d", &p2.x , &p2.y);

    xDiff = p1.x - p2.x;
    yDiff = p1.y - p2.y;

    distance = sqrt(xDiff*xDiff + yDiff*yDiff);
    printf("distance : %lf", distance);
    return 0;
}