
#include <stdio.h>

int main() {
    int n, num, even = 0, odd = 0;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    return 0;
}
