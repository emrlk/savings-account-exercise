#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

int main(){

   double interestRate = 0;
   double startingBal = 0;
   int monthsPassed = 0;
   double deposit = 0;
   double withdrawal = 0;
   double totalD; //total deposited
   double totalW; //total withdrawn
   double totalI; //total interest earned
      
   cout << "Enter the savings account's starting balance: " << endl;
   cin >> startingBal; 
   cout << "Enter the savings account's annual interest rate: " << endl;
   cin >> interestRate;
   cout << "How many months have passed since the account was opened? " << endl;
   cin >> monthsPassed;
   
   SavingsAccount account(interestRate, startingBal);

   
   for(int i = 1; i <= monthsPassed; i++){
      
      cout << "Enter the amount deposited during month " << + i << + ":" << endl;
      cin >> deposit;
      account.deposit(deposit);
      totalD += deposit;
      
      cout << "Enter the amount withdrawn during month " << + i << + ":" << endl;
      cin >> withdrawal;
      account.withdrawal(withdrawal);
      totalW += withdrawal;   
      
      totalI += account.getBalance() * (account.getInterestRate() / 12);
      account.addMonthlyInterest();
   }
   
   cout << fixed;
   cout << "Total deposited: $" << setprecision(2) << totalD << endl;
   cout << "Total withdrawn: $" << setprecision(2) << totalW << endl;
   cout << "Interest Earned: $" << setprecision(2) << totalI << endl;
   cout << "Ending balance: $" << setprecision(2) << (float) account.getBalance() << endl;
   return EXIT_SUCCESS;
}
