// wap to read a character check wether it is a alphabet , digit or a special symbol

#include <stdio.h>

int main() {

    char ch;

    printf("Enter Your Character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) {
        printf("It is a Capital Letter: ");
    } else if (ch >= 97 && ch <= 122) {
        printf("It is a Small letter: ");
    } else if (ch >= 48 && ch <= 57) {
        printf("It is a Digit: ");
    } else {
        printf("You Choose a Special Character: ");
    }
    return 0;
}