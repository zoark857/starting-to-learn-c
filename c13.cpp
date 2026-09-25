#include<stdio.h>
#include<math.h>
int main(){

    // COMPOUND INTEREST CALCULATOR //
     double principal = 0.0;
     double final_amount = 0.0;
     double compound_intrest = 0.0;

     printf("Enter the principal amount: ");
     scanf("%lf", &principal);
     printf("Enter the final amount: ");
     scanf("%lf", &final_amount);
     compound_intrest = final_amount - principal;
     printf(" The compund intrest is: %2lf", compound_intrest);

     return 0;

}