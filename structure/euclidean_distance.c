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

    p p1 = {1, 2}, p2 = {2, 1};
    float distance;

    distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    printf("%.4f", distance);

    return 0;
}