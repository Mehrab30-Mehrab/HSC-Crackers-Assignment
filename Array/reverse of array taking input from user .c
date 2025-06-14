#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements to put in array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int brr[n];

    for(int i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];
    }
    printf("Reversed array:\n ");
    for(int i = 0; i < n; i++) {
        printf("%d\n ", brr[i]);
    }

    return 0;
}
