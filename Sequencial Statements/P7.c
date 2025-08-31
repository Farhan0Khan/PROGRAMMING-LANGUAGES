// wap to swap to numbers without using third variable//

#include <stdio.h>

int main() {

    int a, b; 

    printf("Enter Your First NUmber: ");
    scanf("%d", &a);
    printf("\nEnter Your Second Number: ");
    scanf("%d", &b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Your First Number Is: %d\nYour Second Number is %d", a,b);

    return 0;
}