#include <stdio.h>

int main() {
    float p, r, n, simple_interest;

    // Input principal amount
    printf("Enter the principal amount (p): ");
    scanf("%f", &p);

    // Input rate of interest
    printf("Enter the rate of interest (r) in percentage: ");
    scanf("%f", &r);

    // Input time period
    printf("Enter the time period (n) T(in years): ");
    scanf("%f", &n);

    // Calculate simple interest
    simple_interest = (p * r * n) / 100;

    // Display result
    printf("\n--- Simple Interest Calculation ---\n");
    printf("Principal Amount: %.2f\n", p);
    printf("Rate of Interest: %.2f%%\n", r);
    printf("Time Period: %.2f years\n", n);
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}