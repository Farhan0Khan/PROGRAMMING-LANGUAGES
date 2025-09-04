//Write a C program to read the roll no, 
//name and marks of five subjects and calculate the total, percentage and print division.

#include <stdio.h>

int main() {

    int rollno, marks1, marks2, marks3, marks4, marks5, total;
    char name[50];
    float percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollno);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d\n%d\n%d\n%d\n%d", &marks1, &marks2, &marks3, &marks4, &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500.0) * 100;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Division: First Division\n");
    } else if (percentage >= 50) {
        printf("Division: Second Division\n");
    } else if (percentage >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;

}








