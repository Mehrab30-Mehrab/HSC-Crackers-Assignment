
#include <stdio.h>

int main() {
    int ab, bc, cd, da;
    int A, B, C, D;

    scanf("%d %d %d %d", &ab, &bc, &cd, &da);
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int angle_sum = A + B + C + D;

    if (angle_sum != 360) {
        printf("Not a Parallelogram\n");
    } else if (ab == cd && bc == da) {
        printf("Form a Parallelogram\n");

        if (ab == bc && bc == cd && cd == da) {
            if (A == 90 && B == 90 && C == 90 && D == 90) {
                printf("Square\n");
            } else {
                printf("Rhombus\n");
            }
        } else if (A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Rectangle\n");
        } else {
            printf("Normal parallelogram\n");
        }
    } else {
        printf("Not a Parallelogram\n");
    }

    return 0;
}
