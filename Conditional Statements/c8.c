//Write a C program to calculate the root of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {

    int D, root1, root2, a, b, c;

    printf("Enter Coefficient of a: ");
    scanf("%d", & a);
    printf("Enter Coefficient of b: ");
    scanf("%d", & b);
    printf("Enter Coefficient of c: ");
    scanf("%d", & c);

    D = b * b - 4 * a * c;


    if (D == 0) {
        root1 = root2 = -b/2*a;
        printf("Roots are Linear and same: ");
        printf("Root1 is %d , Root2 is %d", root1, root1);
    } else if ( D > 0 ) {
        root1 = (-b + sqrt(D))/2*a;
        root2 = (-b - sqrt(D))/2*a;
        printf("Roots are Linear and Different: ") ;    
        printf("Root1 is %d, Root2 is %d", root1, root2);
    } else  {
        printf("Roots are Non Linear since roots are imaginary: ");
    } 
    return 0;
    
    
}