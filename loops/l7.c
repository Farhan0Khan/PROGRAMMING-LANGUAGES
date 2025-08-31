// wap to print following pattern 2, 5, 10 , 17,,,,,,, n

#include <stdio.h>

int main() {

    int n, i = 1;

    printf("Enter Your Number: ");
    scanf("%d", &n);

    while (i<=n) {
        printf("%d\t", i*i+1);
        i++;
    }
    return 0;
}