#include <stdio.h>

typedef struct {
    float x, y;
} point;

typedef struct {
    point p1, p2;
} rect;


int main() {

    rect point = {{1, 1}, {2, 2}};
    float area = (point.p2.x - point.p1.x) * (point.p2.y - point.p1.y);

    printf("%f", area);

    return 0;
}