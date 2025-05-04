#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the coordinate point (x y): ");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origin Point\n");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis\n");
    }
    else if (y == 0) {
        printf("The point lies on the X-axis\n");
    }
    else if (x > 0 && y > 0) {
        printf("1st Quadrant\n");
    }
    else if (x < 0 && y > 0) {
        printf("2nd Quadrant\n");
    }
    else if (x < 0 && y < 0) {
        printf("3rd Quadrant\n");
    }
    else if (x > 0 && y < 0) {
        printf("4th Quadrant\n");
    }

    return 0;
}
