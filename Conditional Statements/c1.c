// wap to print largest no

#include <stdio.h>

int main() {

    int a, b;

    printf("Enter Your First Number: ");
    scanf("%d", &a);

    printf("Enter Your Second Numer: ");
    scanf("%d", &b);

    if (a>b) {
        printf("\n%d is Greatest Number ",a);
    }
    if (b>a) {
        printf("\n%d is a Greatest Number ", b);
    }
    if (a==b) {
        printf("\n%d , %d Both are Equal NUmbers ", a,b);

    }
    return 0;

}