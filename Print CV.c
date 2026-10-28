#include <stdio.h>

int main() {
    char name[50], education[50], address[100];
    int age;

    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your education: ");
    scanf(" %49[^\n]", education);

    printf("Enter your address: ");
    scanf(" %99[^\n]", address);

    printf("\n--- CURRICULUM VITAE ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Education: %s\n", education);
    printf("Address: %s\n", address);

    return 0;
}