// calculate the distance from km to meter, cm, feet, inches, milimeter

#include <stdio.h>

int main() {

    float km, m, feet, inches, cm;
    
    printf("Enter Your Distance in Km: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    feet = cm * 30;
    inches = feet/12;

    printf("Distance in Meters: %f", m);
    printf("\nDistance in Centimeters: %f", cm);
    printf("\nDistance in Feets: %f", feet);
    printf("\nDistance in Inches: %f", inches);
    
    return 0;

}