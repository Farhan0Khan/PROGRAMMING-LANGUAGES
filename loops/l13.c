// wap to compute a raised to the power 

#include <stdio.h>

int main() {

    int a, b, power = 1;
    printf("Enter Your Base: ");
    scanf("%d", &a);
    printf("Enter Your Power: ");
    scanf("%d", &b);

    for (int i=1; i<=b; i++) {                              
        power = a * a;
    }
    printf("%d", power);

    return 0;

}