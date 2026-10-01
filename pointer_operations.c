#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n", b);

    swap(&a, &b);

    printf("\nAfter Swapping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n", b);

    printf("\nAddresses:\n");
    printf("Address of first number: %p\n", (void *)&a);
    printf("Address of second number: %p\n", (void *)&b);

    return 0;
}
