// write a program to convert degree celsius to farenheight //

#include <stdio.h>

int main() {

    int c, f;

    printf("Enter Your Temperatuer in Degree Celcius: ");
    scanf("%d", &c);

    f = 9*c/5 + 32;

    printf("The Temperature in Farenheight is : %d", f);

    return 0;

}