/* @file SavingsAccount.h
*  @author Emily Louk
*  Specification file for SavingsAccount class
*/

class SavingsAccount{

private:

   double interestRate; //the accounts annual interest rate
   double balance; //the account balance
   
public:

   /**
   * Postcondition: A savingsAccount with interestRate of 0.0 and 
   * balance of 0.0 */
   SavingsAccount();
   
   /** Initializes a Savings Account with an interest rate
	*	 and a balance.
	*	@param i the interest rate to initialize with
	*	@param b the balance to initialize with
    */
   SavingsAccount(double i, double b);
   
   /** Gets the savings account's annual interest rate.
   * @return the account's annual interest rate */
   double getInterestRate();
   
   /** Gets the savings account's balance.
   * @return the accounts balance */
   double getBalance();
   
   /** Sets the interestRate of the account.
   * @param i - the desired interestRate
   */
   void setInterestRate(double i);
   
   /** Sets the balance of the account.
   * @param b - the desired balance
   */
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