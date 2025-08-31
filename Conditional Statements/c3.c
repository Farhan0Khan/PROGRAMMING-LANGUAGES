// wap to print largest number Among three Number //

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter Your First Number:");
    scanf("%d", &a);
    printf("Enter Your SEcond Number:");
    scanf("%d", &b);
    printf("Enter Your Third Number:");
    scanf("%d", &c);

    if (a>b && a>c) {
        printf("%d is the Greatest Number ", a);
    } else if (b>c && b>a) {
        printf("%d is the Greatest Number ", b);
    } else if (c>a && c>b) {
        printf("%d is the Greatest Number ", c);
    } else {
        printf("%d , %d, %d are eqaul ", a,b,c);
    }
    
}