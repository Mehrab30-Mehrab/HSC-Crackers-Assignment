#include <stdio.h>

int main() {
    int i, n;
    int sum = 0;
    int even_number = 2;
    printf("Enter the number of even terms to sum: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += even_number;
        even_number += 2;
    }
    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}
