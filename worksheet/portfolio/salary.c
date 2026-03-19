
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: James Graham
 * ID: 202028828
 */

int main(void) {

   // define variables
   double salary = 36250.0;    
   double NI = 8.0;        
   double taxRate = 15.0;      

   // calculate NI and salary after
   double niContribution = salary * (NI / 100.0);
   double salaryAfterNi = salary - niContribution;

   // calculate income that can be taxed
   double taxableIncome = 0.0;
   if (salaryAfterNI > 12500.0) {
      taxableIncome = salaryAfterNI - 12500.0;
   }

   // calculate tax and salary
   double taxContribution = taxableIncome * (tax_rate / 100.0);
   double takeHomeSalary = salaryAfterNI - taxContribution;

   // print output
   printf("Salary - £%.2f\n", salary);
   printf("NI contribution - £%.2f\n", niContribution);
   printf("Tax paid - £%.2f\n", taxContribution);
   printf("Take home salary - £%.2f\n", takeHomeSalary);

   return 0;
}