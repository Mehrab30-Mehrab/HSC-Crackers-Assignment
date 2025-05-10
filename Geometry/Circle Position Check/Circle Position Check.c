#include <stdio.h>

int main() {
    int r, x, y;
    scanf("%d %d %d", &r, &x, &y);

    int distance_Squared = x * x + y * y;
    int radius_Squared = r * r;

    if (distance_Squared < radius_Squared) {
        printf("Inside the Circle\n");
    } else if (distance_Squared == radius_Squared) {
        printf("On the Circle\n");
    } else {
        printf("Outside the Circle\n");
    }

    return 0;
}

