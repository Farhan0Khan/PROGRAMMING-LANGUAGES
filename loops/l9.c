// wap to check the number is palindrome


#include <stdio.h>

int main() {

    int i,n,m, digit, rev = 0;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    m = n;
    
    while (n>0) {

        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
        
    }
    if ( rev == m ) {
        printf("The Number %d is Palindrome ", m);
    } else {
        printf("The Number %d is not Palindrome ", m);
    }
    return 0;

}