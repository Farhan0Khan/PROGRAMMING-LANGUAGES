// wap to print all combinations of A, B, C
# include <stdio.h>

int main () {

    for (char i=65; i<=67; i++){
        for (char j=65; j<=67; j++) {
            for (char k=65; k<=67; k++) {
                if (i!=j && j!=k && k!=i) {
                    printf("%c%c%c\n", i, j, k);
                }
            }
        }
    } return 0;
}