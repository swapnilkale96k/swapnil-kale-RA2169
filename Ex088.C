#include <stdio.h>

int main() {
    printf("This is Example 88: Intermediate (if-else / loop).\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
    printf("Printing numbers from 1 to 13:\n");
    for (int i = 1; i <= 13; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
