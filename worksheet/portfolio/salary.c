
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: James Graham
 * ID: 202028828
 */

int main(void) {

   // define variables
   double salary = 30000;    
   double NI = 9;        
   double taxRate = 25;      

   // calculate NI and salary after
   double niContribution = salary * (NI / 100.0);
   double salaryAfterNI = salary - niContribution;

   // calculate income that can be taxed
   double taxableIncome = 0.0;
   if (salaryAfterNI > 12500.0) {
      taxableIncome = salaryAfterNI - 12500.0;
   }

   // calculate tax and salary
   double taxContribution = taxableIncome * (taxRate / 100.0);
   double takeHomeSalary = salaryAfterNI - taxContribution;

   // print output
   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",niContribution);
   printf("Tax contribution £%.2f\n",taxContribution);
   printf("Take home salary £%.2f\n",takeHomeSalary);

   return 0;
}