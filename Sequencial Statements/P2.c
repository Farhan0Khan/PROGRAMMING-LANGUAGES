// calculate net salary of an employee

#include <stdio.h>

int main() {

    float bs, da, ta, hra, pf, ins, netsal ;
    printf("Enter Your Basic Salary; ");
    scanf("%f", &bs);

    
    da = bs * 40/100;
    ta = bs * 12/100;
    hra = bs * 15/100;
    pf = bs * 18/100;
    ins = bs * 10/100;
    
    netsal = bs + da + ta + hra - pf - ins;

    printf("DA= %f\nta= %f\nhra= %f\npf= %f\nins= %f\nNet Salary= %f", da, ta, hra, pf , ins, netsal);

    return 0;

}