#include <stdio.h>

int main() {
    int a, b, c;
    int discriminant;

    // Read input values
    scanf("%d %d %d", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Determine type of equation
    if (discriminant < 0) {
        printf("BAD EQUATION\n");
    } else if (discriminant == 0) {
        printf("BEST EQUATION\n");
    } else {
        printf("GOOD EQUATION\n");
    }

    return 0;
}
