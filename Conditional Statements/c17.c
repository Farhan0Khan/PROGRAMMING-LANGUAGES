/* wap to calclate the net salary of an employee as per the following rules 
basic salary        da      ta      hra     pf      ins

>=40000             40%     15%     15%     20%     10%

>=30k and <=40k     35%     12%     12%     15%     13%

>=15k and <=30k     30%     10%     10%     10%     10%

otherwise           20%     10%     10%     7%      7%

*/
#include <stdio.h>

int main () {

    float basic , da , ta , hra , pf , ins , netsal ;

    printf("Enter Your Basic Salary: ");
    scanf("%f", &basic);

    if ( basic >= 40000) {
        da = (40 * basic)/100;
        ta = (15 * basic)/100;
        hra = (15 * basic)/100;
        pf = (20 * basic)/100;
        ins = (10 * basic)/100;
        netsal = (basic + da + ta + hra) - (pf + ins);
        printf("Your Net Salary is: %.2f", netsal);
    } 
    else if ( basic >= 30000 && basic < 40000) {
        da = (35 * basic)/100;
        ta = (12 * basic)/100;
        hra = (12 * basic)/100;
        pf = (15 * basic)/100;
        ins = (13 * basic)/100;
        netsal = (basic + da + ta + hra) - (pf + ins);
        printf("Your Net Salary is: %.2f", netsal);
    }
    else if ( basic >= 15000 && basic < 30000) {
        da = (30 * basic)/100;
        ta = (10 * basic)/100;
        hra = (10 * basic)/100;
        pf = (10 * basic)/100;
        ins = (10 * basic)/100;
        netsal = (basic + da + ta + hra) - (pf + ins);
        printf("Your Net Salary is: %.2f", netsal);
    }
    else {
        da = (20 * basic)/100;
        ta = (10 * basic)/100;
        hra = (10 * basic)/100;
        pf = (7 * basic)/100;
        ins = (7 * basic)/100;
        netsal = (basic + da + ta + hra) - (pf + ins);
        printf("Your Net Salary is: %.2f", netsal);
    }
    return 0 ;
}