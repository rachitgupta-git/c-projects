#include <stdio.h>

int main() {
    int choice, qty;
    float price, total = 0;
    char more;

    printf("Welcome to Simple Restaurant Billing\n");

    do {
        printf("\nMenu:\n");
        printf("1. Veg Biryani - ₹150\n");
        printf("2. Paneer Butter Masala - ₹180\n");
        printf("3. Butter Naan - ₹40\n");
        printf("4. Cold Drink - ₹30\n");

        printf("Enter item number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: price = 150; break;
            case 2: price = 180; break;
            case 3: price = 40; break;
            case 4: price = 30; break;
            default: 
                printf("Invalid choice.\n");
                continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        total += price * qty;

        printf("Add more items? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    float gst = total * 0.05;
    float final = total + gst;

    printf("\nSubtotal: ₹%.2f", total);
    printf("\nGST (5%%): ₹%.2f", gst);
    printf("\nTotal Bill: ₹%.2f\n", final);

    return 0;
}