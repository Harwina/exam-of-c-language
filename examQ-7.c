#include <stdio.h>

int main() {
    int n;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the pattern
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num * num);
        }
        num++; // Increase the number for the next row
        printf("\n");
    }

    return 0;
}
