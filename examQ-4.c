#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    for (int i = 0; i < n; i++) {
        int *ptr = &array[i];  
        *ptr = (*ptr) * (*ptr);
    }

    
    printf("The squares of the elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}
