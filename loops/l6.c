// wap to print following pattern 100 90 80 70.... 50

#include <stdio.h>

int main() {

    int i=100;

    while (i>=50) {
        printf("%d\t", i);
        i -= 10;
    }
    return 0;
}