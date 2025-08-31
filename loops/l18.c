/*wap to print the following pattern 

11 111
22 222
33 333
*/
#include <stdio.h>
int main() {

    for (int i=1; i<=3; i++) {
        for (int j=1; j<=5; j++) {
            printf("%d\t" ,i*1);
        }
        printf("\n");
    }
}