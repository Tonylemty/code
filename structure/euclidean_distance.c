#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};

typedef struct Point p;

// typedef struct {
//     float x, y;
// } p;

int main() {

    p p1 = {2, 3}, p2 = {4, 5};
    float distance;

    distance = sqrt(pow(p1.x - p2.x, 2) + (p1.y - p2.y, 2));
    printf("%.4f", distance);

    return 0;
}