/*wap to print the following pattern 

1
12
123
1234
12345
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    for (int i=0; i<=n-1; i++) {
        for (int j=1; j<=i+1 ; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}