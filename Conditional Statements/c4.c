// write a Program to check alpahbet vowel or consonants//

#include <stdio.h>

int main() {

    char alpha;
    printf("Enter Your Character:");
    scanf("%c", &alpha);

    switch (alpha) {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        printf("\nYou Choose Vowel:");

        break;

        default:
        printf("\nYou Choose Consonant: ");

        return 0;
         

    }
}