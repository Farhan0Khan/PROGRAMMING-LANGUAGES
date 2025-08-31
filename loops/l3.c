// print the following pattern 2 4  8  10..20//


#include <stdio.h>

int main()  {

    int i = 2;
    while (i<=20) {
        printf("%d\t", i);
        i += 2;
    }
    return 0;
}