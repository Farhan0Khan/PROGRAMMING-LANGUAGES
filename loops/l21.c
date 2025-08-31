/*wap to print the following pattern 

1
22
333
444
5555
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    for (int i=0; i<=n-1; i++) {
        for (int j=1; j<=i+1 ; j++) {
            printf("%d", i+1);
        }
        printf("\n");
    }
    return 0;
}