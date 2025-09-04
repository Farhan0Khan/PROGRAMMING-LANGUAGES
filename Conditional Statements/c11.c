/* Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :

Unit	Charge/unit
upto 199	@5
200 and above but less than 400	@6.5
400 and above but less than 600	@7.5
600 and above	@8.00 */




#include <stdio.h>
#include <string.h>

int main() {
    int customerID, units;
    char name[50];
    float amount, surcharge, totalAmount;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate amount based on units consumed
    if (units < 200) {
        amount = units * 5.0;
    } else if (units >= 200 && units < 400) {
        amount = units * 6.5;
    } else if (units >= 400 && units < 600) {
        amount = units * 7.5;
    } else {
        amount = units * 8.0;
    }

    // Calculate surcharge if applicable
    if (amount > 300) {
        surcharge = amount * 0.15; // 15% surcharge
    } else {
        surcharge = 0;
    }

    totalAmount = amount + surcharge;

    // Display the billtr
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount: %.2f\n", amount);
    printf("Surcharge: %.2f\n", surcharge);
    printf("Total Amount to be Paid: %.2f\n", totalAmount);

    return 0;
}


