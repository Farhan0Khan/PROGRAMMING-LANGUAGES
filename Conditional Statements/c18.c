/*
Wap to following
Gender      Qualification       Experience      Salary

M               G                   <10            50K

M               PG                  <10            60K

M               G                   >=10            55K

M               PG                  >=10            65K

F               G                   <10             20K

F               PG                  <10             30K    k,

F               G                   >=10            25K

F               PG                  >=10            35K
*/

#include <stdio.h>

int main () {
    int exp , salary ;
    char gen , qual ;
    printf("Enter Your Gender (M/F) :");
    scanf("%d", &exp);
    printf("Enter Your Qualification (G/PG) :");
    scanf(" %c", &gen);
    printf("Enter Your Experience in Years :");
    scanf("%d", &exp);  

    if ( gen == 'M' && qual == 'G' && exp < 10 ) {
        salary = 50000;
        printf("Your Salary is: %d", salary);
    } 
    else if ( gen == 'M' && qual == 'PG' && exp < 10 ) {
        salary = 60000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'M' && qual == 'G' && exp >= 10 ) {
        salary = 55000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'M' && qual == 'PG' && exp >= 10 ) {
        salary = 65000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'F' && qual == 'G' && exp < 10 ) {
        salary = 20000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'F' && qual == 'PG' && exp < 10 ) {
        salary = 30000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'F' && qual == 'G' && exp >= 10 ) {
        salary = 25000;
        printf("Your Salary is: %d", salary);
    }
    else if ( gen == 'F' && qual == 'PG' && exp >= 10 ) {
        salary = 35000;
        printf("Your Salary is: %d", salary);
    }
    else {
        printf("Invalid Input! Please enter correct details.");
    }
    return 0;
}