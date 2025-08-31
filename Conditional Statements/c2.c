// wap to check a number is even or odd //

# include <stdio.h>

int main() {

    int a;

    printf("Enter Your Number: ");
    scanf("%d", &a);

    if (a%2 == 0) {
        printf("The Number is Even");

    } else {
        printf("The Number is Odd");
    }
    return 0;
}
