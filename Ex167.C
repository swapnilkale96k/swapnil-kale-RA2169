#include <stdio.h>

int main() {
    printf("This is Example 167: Advanced pattern program.\n");
    int rows = 10;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
