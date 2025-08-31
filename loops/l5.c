// wap to print the following pattern 10 20 30 .... n

#include <stdio.h>

int main() {

    int n, i = 10;
    printf("Enter Your Number: ");
    scanf("%d", &n);

    while (i<=n) {
        printf("%d\t",i);
        i += 10;
    }
    return 0;
}