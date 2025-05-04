#include <stdio.h>

int main() {
    int a, b, c;
    int discriminant;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("BAD EQUATION\n");
    } else if (discriminant == 0) {
        printf("BEST EQUATION\n");
    } else {
        printf("GOOD EQUATION\n");
    }

    return 0;
}
