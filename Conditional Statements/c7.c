// Write a C program to determine eligibility for admission to a professional course
// based on the following criteria:  Marks in Maths >=65 and Marks in Phy >=55
// and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140

#include <stdio.h>

int main() {

    int m, p ,c;

    printf("Enter Your Marks in Pyhsics , Maths, Chemistry: ");
    scanf("%d\n%d\n%d", &m , &p , &c);

    if ( m >= 65 && p >= 55 && c >= 50) {
        printf("Congrats! Your Are Eligible for Admission: ");
    } else if ((m+c+p) >= 190 && (m+p) >= 140 ) {
        printf("Congrats! Your Are Eligible for Admission: ");
    } else {
        printf("Good Bye! We can't Admit You: ");
    }
    return 0;
}