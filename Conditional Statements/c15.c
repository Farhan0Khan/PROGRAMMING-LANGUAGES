// wap to read a character if character is in lower case and it is convert to the uppercase and vice versa //


#include <stdio.h>



int main () {

    char a ;

    printf("Enter Your Character: ");
    scanf("%c", &a);

    if (a>=97 && a<=122) {
        a = a - 32;
        printf("%c", a);
    } 
    else if (a>=65 && a<=90) {
        a = a + 32;
        printf("%c", a);
    }
    return 0;
}