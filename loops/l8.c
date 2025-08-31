// wap to print sum and product of first natural n natural numbers

#include <stdio.h>

int main() {

    int sum = 0;
    int prod = 1;
    int n;

    printf("Enter your Number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        sum += i;
        prod *= i;
    }
    printf("Your Sum is : %d\nYour Product is : %d", sum , prod);

    return 0;
}