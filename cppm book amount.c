#include <stdio.h>

int main() {
    int quantity;
    float price, total_amount, discount, final_amount;

    // Input quantity
    printf("Enter the quantity of CPPM books: ");
    scanf("%d", &quantity);

    // Input price per book
    printf("Enter the price per CPPM book: ");
    scanf("%f", &price);

    // Input discount percentage
    printf("Enter the discount percentage: ");
    scanf("%f", &discount);

    // Calculate total amount
    total_amount = quantity * price;

    // Calculate final amount after discount
    final_amount = total_amount - (total_amount * discount / 100);

    // Display results
    printf("\n--- Bill Summary ---\n");
    printf("Quantity of CPPM books: %d\n", quantity);
    printf("Price per book: %.2f\n", price);
    printf("Total amount before discount: %.2f\n", total_amount);
    printf("Discount applied (%.2f%%): %.2f\n", discount, total_amount * discount / 100);
    printf("Final payable amount: %.2f\n", final_amount);

    return 0;
}