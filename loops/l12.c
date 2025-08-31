// wap to print n prime numbers

#include <stdio.h>

int main() {
    int n ;
    printf("Enter Your number:");
    scanf("%d", &n);

    for (int i=2; i<=n-1; i++) {
        if (n%i == 0) {
            printf("The Number %d is not Prime: ", n);
            break;
        }
        if (i == n) {
            printf("the number %d is a prime", n);
        }
    }
    return 0; 
}