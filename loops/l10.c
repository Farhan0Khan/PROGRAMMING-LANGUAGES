// wap to check the number is Armstrong

#include <stdio.h>

int main() {

    int n ,num, rev = 0 , digit;

    printf("Enter Your Number: ");
    scanf("%d", &n);

    num = n;

    while  (n>0) {
        digit = n%10;
        rev = rev + digit * digit * digit;
        n /= 10;
    }

    if (num == rev) {
        printf("The Number %d is Armstrong ", num);
    } else {
        printf("The Number %d is not Armstrong " ,num);
    } 
    
    return 0;
}
/// 153 is a armstrong//