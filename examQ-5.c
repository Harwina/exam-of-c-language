#include <stdio.h>

struct Car {
    int model;
    int year;
    float price;
};

int main() {
    int n;

    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        printf("Enter model: ");
        scanf("%d", &cars[i].model);
        printf("Enter year: ");
        scanf("%d", &cars[i].year);
        printf("Enter price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\nDetails of Cars:\n");
    printf("===============================\n");
    printf("Model\tYear\tPrice\n");
    printf("===============================\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%.2f\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}
