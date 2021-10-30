/* @file SavingsAccount.h
*  @author Emily Louk
*  Specification file for SavingsAccount class
*  which declares data members, function prototypes,
*  and includes method documentations.
*/

class SavingsAccount{

private:

   double interestRate; //the accounts annual interest rate
   double balance; //the account balance
   
public:

   /** Deafult constructor: Creates a SavingsAccount and initializes
   * its interestRate and balance to default values.
   * Precondition: None.
   * Postcondition: A savingsAccount with interestRate of 0 and 
   * balance of 0 */
   SavingsAccount();
   
   /** Constructor: Creates a SavingsAccount and initializes its
   * interestRate and balance to user-specified values.
   * @param i the interest rate to apply to the account
   * @param b the balance to apply to the account
   * Precondition: interestRate and balance have desireed values.
   * Postcondition: A SavingsAccount of the desired interestRate and
   * balance exists. */
   SavingsAccount(double i, double b);
   
   /** Gets the savings account's annual interest rate.
   * Precondition: None.
   * Postcondition: returns the annual interest rate of the account. 
   * @return the account's annual interest rate */
   double getInterestRate();
   
   /** Gets the savings account's balance.
   * Precondition: None.
   * Postcondition: returns the balance of the account.
   * @return the accounts balance */
   double getBalance();
   
   /** Sets the interestRate of the account.
   * @param i - the desired interestRate
   * Precondition: interestRate is the desired rate.
   * Postcondition: A SavingsAccount's interestRate is i */
   void setInterestRate(double i);
   
   /** Sets the balance of the account.
   * @param b - the desired balance
   * Precondition: balance is the desired balance.
   * Postcondition: A SavingsAccount's balance is b */
   void setBalance(double b);
   
   /** Subtracts the amount of a withdrawal from
   * an account's balance.
   * @param amount - the amount of the withdrawal
   * Precondition: amount is the desired withdrawal amount
   * Postcondition: account's balance is lowered by amount */
   void withdrawal(double amount);
   
   /** Adds the amount of a deposit to
   * an account's balance.
   * @param amount - the amount of the deposit
   * Precondition: amount is the desired deposit amount
   * Postcondition: account's balance is increased by amount */
   void deposit(double amount);
   
   /** Adds the amount of monthly interest to
   * an account's balance.
   * Precondition: monthly interest must be added to balance
   * Postcondition: account's balance is increased by amount of 
   * monthly interest*/
   void addMonthlyInterest();
};