// write a program to calculate the area of Trinagle , circle, rectanle, square, trapezium

#include <stdio.h>

int main() {

    int choose, r, b, h, l , w, ls, ps1, ps2, bst, aot, aor, aort, aos, aotp;

    printf("Which one Do you Want to Calculate: ");
    printf("\n1.Calculate Area of Triangle:");
    printf("\n2.Calculate Area of Circle:");
    printf("\n3.Calculate Area of Rectangle:");
    printf("\n4.Calculate Area of Square:");
    printf("\n5.Calculate Area of Trapezium:");

    scanf("\n%d", &choose);


    switch (choose) {

        case 1:
        printf("\nEnter the base of Triangle:");
        scanf("%d", &b);
        printf("\nEnter the height of Triangle:");
        scanf("%d", &h);
        aot = 0.5 * b *h;
        printf("\nArea of Triangle is: %d", aot);
        break;

        case 2:
        printf("\nEnter the Radius of circle:");
        scanf("%d", &r);
        aor = 3.4 * r*r;
        printf("\nArea of Circle is: %d", aor);
        break;
        

        case 3:
        printf("\nEnter the lenght of rectanlge:");
        scanf("%d", &l);
        printf("\nEnter the width of Rectangle:");
        scanf("%d", &w);
        printf("\nArea of Rectangle is: %d", aort);
        aort = l*w;
        break;

        case 4:
        printf("\nEnter the Side of Square:");
        scanf("%d", &ls);
        aos = ls * ls;
        printf("\nArea of Square is: %d", aos);
        break;

        case 5:
        printf("\nEnter the height of Trapezium:");
        scanf("%d", &bst);
        printf("\nEnter the First Parallel side of Trapezium:");
        scanf("%d", &ps1);
        printf("\nEnter the Second Parallel side of Trapezium:");
        scanf("%d", &ps2);
        aotp = 0.5 * bst * ps1 * ps2;
        printf("\nArea of Trapezium is: %d", aotp);
        break;

        case 6:
        printf("\nEnter the base of Triangle:");
        scanf("%d", &b);
        printf("\nEnter the height of Triangle:");
        scanf("%d", &h);
        aot = 0.5 * b *h;
        printf("\nArea of Triangle is: %d", aot);
        break;

        default:
        printf("\nYou Choose Wrong Option!");

    }
    return 0;
                                                
}