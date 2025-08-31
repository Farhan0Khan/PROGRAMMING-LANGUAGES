// wap to print all combinations of A, B, C
# include <stdio.h>

int main () {

    for (char i=97; i<=99; i++){
        for (char j=97; j<=99; j++) {
            for (char k=97; k<=99; k++) {
                if (i!=j && j!=k && k!=i) {
                    printf("%c%c%c\n", i, j, k);
                }
            }
        }
    } return 0;
}