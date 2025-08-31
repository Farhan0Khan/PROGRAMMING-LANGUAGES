// wap to reverse the the digit of n numbers




#include <stdio.h>

int main() {

    int i,n, digit, rev = 0;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    
    while (n>0) {

        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
        
    }
   printf("%d" , rev);

}