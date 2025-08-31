// wap to read the age of candidate and determine wether he/she is elegible for vote//
#include <stdio.h>

int  main() {
    int age;

    printf("Enter Your Age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You Are Eligible For Voting Now: ");
    } else {
        printf("You can Not Vote Now: ");
    }
    return 0;
}