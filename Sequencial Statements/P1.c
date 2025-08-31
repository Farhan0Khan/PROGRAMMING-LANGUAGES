// calculate simple Interest //

#include <stdio.h>

int main() {

    float p,r,t, si;

    printf("Enter Your Principal Amount: ");
    scanf("%f", &p);
    printf("\nEnter Your Rate: ");
    scanf("%f",&r);
    printf("\nEnter Your Time: ");
    scanf("%f",&t);

    si = (p*r*t)/100;

    printf("\nYour Calculated Simple Interest is : %f", si);

    return 0;
    

}