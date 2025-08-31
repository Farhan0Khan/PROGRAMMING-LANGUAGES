// Wap to swap to Numbers //

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter Your First NUmber: ");
    scanf("%d", &a);
    printf("Enter Your Second Number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;


    printf("Your FIrst Number is %d\n and Your second Number is %d", a, b);

    return 0;
}